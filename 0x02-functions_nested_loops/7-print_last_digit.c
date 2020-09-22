#include "holberton.h"

/**
 * print_last_digit - print last digit
 * @x: the number
 * Return: the last digit
**/
int print_last_digit(int x)
{
	x = x % 10;
	if (x < 0)
	{
		x = -x;
	}
	_putchar(x + '0');
	return (x);
}
