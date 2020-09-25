#include "holberton.h"

/**
* print_number - print integers
* @n: integer to print
**/
void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);
	putchar(n % 10 + '0');
}
