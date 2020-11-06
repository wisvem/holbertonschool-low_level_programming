#include "holberton.h"

/**
* flip_bits - returns the number of bits
* you would need to flip to get from one number to another.
* @n: number 1
* @m: number 2
* Return: the number of the bits
**/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	n = n ^ m;
	m = 0;
	while (n > 0)
	{
		m = m + (1 & n);
		n = n >> 1;
	}
	return (m);
}
