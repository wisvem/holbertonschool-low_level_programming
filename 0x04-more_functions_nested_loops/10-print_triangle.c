#include "holberton.h"

/**
 * print_triangle - print a triangle with le leght of the input
 * @size: size of the triangle
 *
 * Return - none
 */


void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	for (i = 1; i <= size; i++)
	{
	for (j = size - i; j > 0; j--)
		_putchar(32);
	for (k = 1; k <= i; k++)
		_putchar(35);
	_putchar('\n');
	}
	else
		_putchar('\n');
}
