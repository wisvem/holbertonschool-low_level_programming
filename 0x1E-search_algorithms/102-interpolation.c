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
	size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
}