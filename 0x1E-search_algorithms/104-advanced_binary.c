#include "search_algos.h"

/**
* print_array - auxiliary function to print an array
* @array: pointer to the first element of the array to search in
* @l: left limit
* @r: right limit
* @size: number of elements in array
**/
void print_array(int *array, size_t l, size_t r, size_t size)
{
	size_t i;

	/*printf("l: %lu r: %lu\n", l, r);*/
	printf("Searching in array: ");
	for (i = l; i < (r < size ? r : size); i++)
	{
		printf("%i, ", array[i]);
	}
	printf("%i\n", array[i]);
}

/**
* bs - searches for a value in an array of integers
* @array: pointer to the first element of the array to search in
* @l: left limit
* @r: right limit
* @value: value to search for
* @size: number of elements in array
* Return: the first index where value is located \
* or -1 if value is not present in array or if array is NULL
**/
int bs(int *array, size_t l, size_t r, int value, size_t size)
{
	size_t mid;

	/*printf("l: %lu r: %lu\n", l, r);*/
	if (r > l)
	{
		print_array(array, l, r, size);
		mid = (l + r) / 2;
		if (array[mid] == value)
		{
			return (bs(array, l, mid - 1, value, size));
		}
		else if (value < array[mid])
		{
			return (bs(array, l, mid - 1, value, size));
		}
		else
		{
			return (bs(array, mid + 1, r, value, size));
		}
	}
	else if (value == array[l])
	{
		return (l);
	}
	return (-1);
}
/**
* advanced_binary - searches for a value in an array of integers
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
		return (bs(array, l, r, value, size));
	}
	return (-1);
}
