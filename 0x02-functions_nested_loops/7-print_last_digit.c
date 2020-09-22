#include "holberton.h"

/**
 * print_last_digit - print last digit
 * @x: the number
 * Return: the last digit
**/
int print_last_digit(int x)
{
	x = x % 10;
	if (x >= 0)
	{
		return (x);
		_putchar('0' + x);
	}
	else
	{
		_putchar('0' + x * -1);
		return (x * -1);
	}
}
