#include "holberton.h"
#include <stdlib.h>

/**
* create_array - create an array of char
* @size: size of array
* @c: an specific char
* Return: null size 0 or fail , a pointer to the array
**/
char *create_array(unsigned int size, char c)
{
	char *ptr = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
