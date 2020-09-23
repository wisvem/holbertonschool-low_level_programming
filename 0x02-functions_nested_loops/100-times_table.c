#include "holberton.h"

/**
* print_times_table - print times table n times
* @n: number of times
**/
void print_times_table(int n)
{
	int i, j, n1, n2, n3, n4;

	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				n1 = i * j;
				n2 = n1 % 10;
				n3 = (n1 / 10) % 10;
				n4 = n1 / 100;
				if (n4 != 0)
				{
					_putchar('0' + n4);
				}
				if (n4 != 0 || n3 != 0)
				{
					_putchar('0' + n3);
				}
				_putchar('0' + n2);
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
					if (i * (j + 1) < 100)
						_putchar(' ');
					if (i * (j + 1) < 10)
						_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
