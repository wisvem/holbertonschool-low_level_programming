#include <stdio.h>

/**
 * main - Entry point
 * print combination four digits
 * Return: Always 0 (Success)
**/
int main(void)
{
	int num;
	int num2;
	int u = 0;
	int d = 0;
	int c = 0;
	int um = 0;

	for (num = 0; num <= 99; num++)
	{
		um = num / 10;
		c = num % 10;
		for (num2 = 0; num2 <= 99; num2++)
		{
			d = num2 / 10;
			u = num2 % 10;
			if ((um == d &&  c < u) || (um < d))
			{
				putchar(um + '0');
				putchar(c + '0');
				putchar(' ');
				putchar(d + '0');
				putchar(u + '0');
				if (num < 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
