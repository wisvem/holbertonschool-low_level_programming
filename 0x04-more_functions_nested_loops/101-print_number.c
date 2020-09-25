#include "holberton.h"

/**
* print_number - print integers
* @n: integer to print
**/
void print_number(int n)
{
	int i;
	int res;

	for (i = 1; i <= n;)
	{
		res = n % 10;
		_putchar('0' + res);
		n = n / 10;

	}
}
