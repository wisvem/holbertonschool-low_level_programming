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
	size_t mid, i;

	/*printf("l: %lu r: %lu\n", l, r);*/
	if (r >= l)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
		{
			printf("%i, ", array[i]);
		}
		printf("%i\n", array[i]);
		mid = (l + r) / 2;
		if (array[mid] == value)
		{
			return (bs(array, l, mid - 1, value));
		}
		else if (value < array[mid])
		{
			return (bs(array, l, mid - 1, value));
		}
		else
		{
			return (bs(array, mid + 1, r, value));
		}
	}
	else if (value == array[l])
	{
		return (l);
	}
	return (-1);
}
/**
* advance_binary - searches for a value in an array of integers
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: the first index where value is located \
* or -1 if value is not present in array or if array is NULL
**/
int advanced_binary(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1;

	if (array != NULL)
	{
		return (bs(array, l, r, value));
	}
	return (-1);
}
