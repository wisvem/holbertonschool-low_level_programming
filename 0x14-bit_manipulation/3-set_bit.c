#include "holberton.h"

/**
* set_bit - function that sets the value of a bit.
* @n: pointer
* @index: unsigned int
* Return: integer
**/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == 0 || index >= sizeof(*n) * 8)
	{
		return (-1);
	}
	*n = *n | 1 << index;
	return (1);
}
