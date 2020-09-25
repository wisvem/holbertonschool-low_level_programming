#include "holberton.h"

/**
 *print_number - prints the number given
 *@n: the number to be printed
 *Return: no returns
 */

void print_number(int n)
{
	int i, tmp;

	i = 1;
	if (n < 0)
	{
		_putchar(45);
		if (n == -2147483648)
		{
			_putchar('0' + 2);
			n = n % 1000000000;
		}
		n = -n;
	}
	tmp = n;
	i = 1;
	while (tmp / 10 != 0)
	{
		i = i * 10;
		tmp = tmp / 10;
	}
	for (; i > 0; i = i / 10)
		_putchar('0' + ((n / i) % 10));
}
