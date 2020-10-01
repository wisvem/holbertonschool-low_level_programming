#include "holberton.h"

/**
  * _strncpy - copies a string
  * @dest: destiny
  * @src: source
  * @n: size of src
  * Return: a string
  **/
char *_strncpy(char *dest, char *src, int n)
{
	int sizedest = 0, i = 0;

	while (dest[sizedest] != '\0')
	{
		sizedest++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
