#include "holberton.h"

/**
* print_number - print integers
* @n: integer to print
**/
void print_number(int n)
{
	int i = 1, j, divi = 1;
	int bck = n;

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
		}
		while (n >= 10)
		{
			n = n / 10;
			i++;
		}
		for (j = i; j > 1; j--)
		{
			divi = divi * 10;
		}
		for (j = 1; j <= i; j++)
		{
			n = bck / divi;
			bck = bck - (n * divi);
			divi = divi / 10;
			_putchar('0' + n);
		}
	}
}
