#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* print_binary - print binary representation
* @n: decimal to print
**/
void print_binary(unsigned long int n)
{
	unsigned long int x = n;
	int res, i, j, count = 0;
	char ptr[1024];
	unsigned long int  y = x;

	if (x < 1)
	{
		_putchar('0' + 0);
		return;
	}
	for (j = 0; y > 0; j++)
		y = y / 2;
	for (i = 0; x > 0; i++)
	{
		res = x % 2;
		x = x / 2;
		ptr[i] = res;
		count++;
	}
	for (; i > 0; i--)
	{
		_putchar('0' + ptr[i - 1]);
	}
}
