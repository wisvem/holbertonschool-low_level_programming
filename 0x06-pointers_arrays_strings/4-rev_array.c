#include "holberton.h"

/**
* reverse_array - reverse an array
* @a: array
* @n: size
**/
void reverse_array(int *a, int n)
{
	int tmp, i;
	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
