#include "search_algos.h"
#include <math.h>

/**
* jump_search - searches for a value in an array of integers
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: the first index where value is located \
* or -1 if value is not present in array or if array is NULL
**/
int jump_search(int *array, size_t size, int value)
{
	size_t start = 0, block = 0;
	size_t end, i = 0;

	if (array != NULL)
	{
		end = block;
		block = sqrt(size);
		while (end < size && array[end] < value)
		{
			start = end;
			end = end + block;
			printf("Value checked array[%lu] = [%i]\n", start, array[start]);
		}

		printf("Value found between indexes [%lu] and [%lu]\n", start, end);

		for (i = start; i <= end && i < size; i++)
		{
			if (array[i] == value)
			{
				printf("Value checked array[%lu] = [%i]\n", i, array[i]);
				return (i);
			}
			printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		}
	}
	return (-1);
}
