#include "holberton.h"

/**
* print_most_numbers - print 0 to 9 but not 2 or 4
**/
void print_most_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
