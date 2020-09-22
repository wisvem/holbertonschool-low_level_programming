#include "holberton.h"
#include <stdio.h>

/**
* print_to_98 - print every number until 98
* @n: the initial number
**/
void print_to_98(int n)
{
	int x;

	if (n <= 98)
	{
		for (x = n; x <= 98; x++)
		{
			printf("%i", x);
			if (x != 98)
			{
				printf(", ");
			}
		}
	}
	if (n > 98)
	{
		for (x = n; x >= 98; x--)
		{
			printf("%i", x);
			if (x != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
