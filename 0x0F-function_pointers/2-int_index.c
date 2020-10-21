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
	int i, res = -1;

	if (cmp == NULL || size <= 0 || array == NULL)
	{
		return (res);
	}
	for (i = 0; i < size; i++)
	{
		res = cmp(array[i]);
		if (res != 0)
		{
			return (i);
		}
	}
	return (res);
}
