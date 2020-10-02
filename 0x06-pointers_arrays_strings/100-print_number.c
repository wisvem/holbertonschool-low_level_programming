#include "holberton.h"

/**
* print_number - print integers
* @n: integer to print
**/
void print_number(int n)
{
	unsigned int m = n;
	unsigned int bck = n;
	int i = 1, j, divi = 1;

	if (n >= 0 && n <= 9)
	{
		_putchar('0' + n);
	}
	else if (n < 0 && n >= -9)
	{
		n = -n;
		_putchar('-');
		_putchar('0' + n);
	}
	else
	{
		if (n <= -10)
		{
			n = -n;
			_putchar('-');
			bck = n;
			m = n;
		}
		while (m >= 10)
		{
			m = m / 10;
			i++;
		}
		for (j = i; j > 1; j--)
		{
			divi = divi * 10;
		}
		for (j = 1; j <= i; j++)
		{
			m = bck / divi;
			bck = bck - (m * divi);
			divi = divi / 10;
			_putchar('0' + m);
		}
	}
}
