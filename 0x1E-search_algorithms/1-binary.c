#include "search_algos.h"

/**
* binary_search - searches for a value in an array of integers
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: the first index where value is located \
* or -1 if value is not present in array or if array is NULL
**/
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, m, i;

	if (array != NULL)
	{
		while (l <= r)
		{
			printf("Searching in array: ");
			for (i = l; i < r; i++)
			{
				printf("%i, ", array[i]);
			}
			printf("%i\n", array[i]);
			m = (l + r) / 2;
			if (array[m] < value)
			{
				l = m + 1;
			}
			if (array[m] > value)
			{
				r = m - 1;
			}
			if (array[m] == value)
				return (m);
		}
	}
	return (-1);
}
