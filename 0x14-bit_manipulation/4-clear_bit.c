
#include "holberton.h"

/**
 * clear_bit - function that sets the value of a bit to 0
 * @n: pointer
 * @index: unsigned integer
 * Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index >= sizeof(*n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
