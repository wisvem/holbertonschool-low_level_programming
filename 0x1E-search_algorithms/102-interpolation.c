#include "search_algos.h"

/**
* interpolation_search - searches for a value in an array of integers
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: the first index where value is located \
* or -1 if value is not present in array or if array is NULL
**/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid;

	if (array != NULL)
	{
		while ((array[high] != array[low]) &&
			   (value >= array[low]) && (value <= array[high]))
		{
			mid = low + (((double)(high - low) /
						  (array[high] - array[low])) *
						 (value - array[low]));
			if (array[mid] < value)
			{
				printf("Value checked array[%lu] = [%i]\n", mid, array[mid]);
				low = mid + 1;
			}
			else if (value < array[mid])
			{
				printf("Value checked array[%lu] = [%i]\n", mid, array[mid]);
				high = mid - 1;
			}
			else
			{
				printf("Value checked array[%lu] = [%i]\n", mid, array[mid]);
				return (mid);
			}
		}

		if (value == array[low])
		{
			printf("Value checked array[%lu] = [%i]\n", low, array[low]);
			return (low);
		}
		mid = low + (((double)(high - low) /
					  (array[high] - array[low])) *
					 (value - array[low]));
		printf("Value checked array[%lu] is out of range\n", mid);
	}
	return (-1);
}
