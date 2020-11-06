#include "holberton.h"

/**
* print_binary - print binary representation
* @n: decimal to print
**/
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
		_putchar('0' + (n & 1));
	}
	else if (n & 1)
	{
		_putchar('1');
	}
	else
		_putchar('0');
}
