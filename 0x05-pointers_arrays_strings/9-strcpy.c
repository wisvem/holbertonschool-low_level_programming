#include "holberton.h"

/**
* *_strcpy - copies the string
* @dest: destiny
* @src: source
* Return: a copy
**/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
