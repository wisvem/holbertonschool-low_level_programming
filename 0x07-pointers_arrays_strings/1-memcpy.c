#include "holberton.h"

/**
* _memcpy - copy memory area
* @dest: memory destiny
* @src: memory source
* @n: size of source
* Return: dest array
**/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
