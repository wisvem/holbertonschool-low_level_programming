#include "holberton.h"

/**
* times_table - Prints the 9 times table
**/
void times_table(void)
{
	int x, y, r;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			r = x * y;
			if (y == 0 && r < 10)
			{
				_putchar(r + '0');
			}
			else if (x == 0 && y != 0)
			{
				_putchar(' ');
				_putchar(r + '0');
			}
			else if (r < 10)
			{
				_putchar(' ');
				_putchar(r + '0');
			}
			else
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
