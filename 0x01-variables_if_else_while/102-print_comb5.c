#include <stdio.h>

/**
 * main - Entry point
 * print combination three digits
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

	for (num = 1; num <= 99; num++)
	{
		for (num2 = 1; num2 <= 99; num2++)
		{
			if ((num2 > num) || (num == 0 && j != 0))
			{
				um = (num % 10) % 10;
				c = num % 10;
				d = (num2 / 10) % 10;
				u = num2 % 10;
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
