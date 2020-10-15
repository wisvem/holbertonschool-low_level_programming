#include "holberton.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array, using malloc
* @nmemb: number of elements of the array
* @size: size of every element
* Return: a pointer with space allocated
**/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(nmemb * size);
	if (ptr != NULL)
		for (i = 0; nmemb * size; i++)
		{
			ptr[i] = 0;
		}
	return (void(ptr));
}
