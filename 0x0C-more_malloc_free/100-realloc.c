#include "holberton.h"
#include <stdlib.h>
/**
* _realloc - reallocates a memory block using malloc and free
* @ptr: pointer to the memory previously allocated malloc(oldsize)
* @new_size: the new size, in bytes of the new memory block
* @old_size: the size, in bytes, of the allocated space for ptr
* Return: ptr with memory reallocated
**/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
