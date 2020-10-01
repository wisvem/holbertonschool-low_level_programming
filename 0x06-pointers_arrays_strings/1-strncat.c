#include "holberton.h"

/**
  * _strncat - concatenates two strings
  * @dest: destiny
  * @src: source
  * @n: size of src
  * Return: concatenated string
  **/
char *_strncat(char *dest, char *src, int n)
{
	int sizedest = 0, i = 0;

	while (dest[sizedest] != '\0')
	{
		sizedest++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[sizedest] = src[i];
		sizedest++;
		i++;
	}
	return (dest);
}
