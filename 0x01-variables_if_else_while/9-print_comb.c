#include <stdio.h>

/**
 * main - Entry point
 * print combination of two single-digit numbers
 * Return: Always 0 (Success)
**/
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + 48);
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
