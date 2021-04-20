#include "search_algos.h"

/**
* bs - searches for a value in an array of integers
* @array: pointer to the first element of the array to search in
* @l: left limit
* @r: right limit
* @value: value to search for
* Return: the first index where value is located \
* or -1 if value is not present in array or if array is NULL
**/
int bs(int *array, size_t l, size_t r, int value)
{
	size_t m, i;

	if (array != NULL)
	{
		printf("Value found between indexes [%lu] and [%lu]\n", l, r);
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

/**
* exponential_search - searches for a value in an array of integers
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: the first index where value is located \
* or -1 if value is not present in array or if array is NULL
**/
int exponential_search(int *array, size_t size, int value)
{
	size_t i;

	if (array != NULL)
	{
		if (array[0] == value)
			return (0);
		i = 1;
		while (i < size && array[i] <= value)
		{
			printf("Value checked array[%lu] = [%i]\n", i, array[i]);
			i = i * 2;
		}
		return (bs(array, i / 2, (i < size - 1 ? i : size - 1), value));
	}
	return (-1);
}
