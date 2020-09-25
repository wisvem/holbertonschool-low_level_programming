#include "holberton.h"

/**
* print_number - print integers
* @n: integer to print
**/
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	else if (n == 0)
	{
		_putchar('0');
	}
}
