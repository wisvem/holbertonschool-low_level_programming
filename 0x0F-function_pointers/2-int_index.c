#include "function_pointers.h"

/**
* int_index - searches for an integer
* @array: array with integers
* @size: size of the array
* @cmp: pointer to the function to compare values
* Return: the index of the first element for which
* the cmp function does not return 0, return -1 if
* no element matches or size <= 0
**/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || size <= 0 || array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
