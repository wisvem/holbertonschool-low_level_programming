#include <stdio.h>

/**
* print_diagsums - prints sum of two diag
* @a: array of array
* @size: size of the array
**/
void print_diagsums(int *a, int size)
{
	int i, j, sumd1 = 0, sumd2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sumd1 = sumd1 + a[i * size + j];
			}
			if (i + j == size - 1)
			{
				sumd2 = sumd2 + a[i * size + j];
			}
		}
	}
	printf("%d, %d\n", sumd1, sumd2);
}
