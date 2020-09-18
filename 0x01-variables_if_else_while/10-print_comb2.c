#include <stdio.h>

/**
 * main - Entry point
 * print number 00 to 99
 * Return: Always 0 (Success)
**/
int main(void)
{
	int num;

	for (num = 0; num <= 99; num++)
	{
		putchar((num / 10) + '0');
		putchar((num % 10) + '0');
		if (num < 99)
			putchar(',');
	}
	putchar('\n');
	return (0);
}
