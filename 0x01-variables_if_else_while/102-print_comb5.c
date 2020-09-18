#include <stdio.h>

/**
 * main - Entry point
 * print combination three digits
 * Return: Always 0 (Success)
**/
int main(void)
{
	int num;
	int u = 0;
	int d = 0;
	int c = 0;
	int um = 0;

	for (num = 1; num <= 9999; num++)
	{
		um = num / 1000
		c = num / 100;
		d = (num / 10) % 10;
		u = num % 10;
		if ((u > d) && (d  > c))
		{
			putchar(c + '0');
			putchar(d + '0');
			putchar(u + '0');
			if (num < 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
