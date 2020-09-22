#include "holberton.h"

/**
* print_sign - print the sign of a number
* @n: the number to be checked
* Return: 1 and prints + for positive
* -1 and prints - for negative
* 0 and prints 0 for zero
**/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
