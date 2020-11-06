#include "holberton.h"

/**
* get_bit - returns the value of a bit at a given index
* @index: given index
* @n: decimal number
**/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	return (-1);
	return (1 & (n >> index));
}
