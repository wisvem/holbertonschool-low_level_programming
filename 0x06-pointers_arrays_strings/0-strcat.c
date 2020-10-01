#include "holberton.h"

/**
* _strcat - concatenates two strings
* @dest: destiny
* @src: source
* Return: concatenated string
**/
char *_strcat(char *dest, char *src)
{
	int sizedest = 0, sizesrc = 0, i;
	char *fusion;

	while (dest[sizedest] != '\0')
	{
		sizedest++;
	}
	while (src[sizesrc] != '\0')
	{
		sizesrc++;
	}
	fusion
	for (i = 0; i < sizesrc; i++)
	{
		fusion[i] = src[i];
	}
	fusion[i] = '\0';

	return (fusion);
}
