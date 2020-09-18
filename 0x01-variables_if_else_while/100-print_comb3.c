#include <stdio.h>

/**
 * main - Entry point
 * print combination 01 to 99
 * Return: Always 0 (Success)
**/
int main(void)
{
	int num;

	for (num = 1; num <= 99; num++)
	{
		if (num % 10 > num / 10)
		{
			putchar((num / 10) + '0');
			putchar((num % 10) + '0');
			if (num < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
