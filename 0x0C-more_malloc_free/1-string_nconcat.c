#include "holberton.h"
#include <stdlib.h>

/**
* string_nconcat - concatenates two strings
* @s1: string 1
* @s2: string 2
* @n: number of bytes to concatenate from s2
* Return: a pointer
**/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int sizes1 = 0, sizes2 = 0, i, j = 0;
	char *ptr;

	if (s1 != NULL)
	{
		while (s1[sizes1] != '\0')
		{
			sizes1++;
		}
	}
	else
		sizes1 = 0;
	if (s2 != NULL)
	{
		while (s2[sizes2] != '\0')
		{
			sizes2++;
		}
	}
	else
		sizes2 = 0;
	if (n >= sizes2)
		n = sizes2;
	ptr = malloc(sizeof(char) * (sizes1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < sizes1 + n; i++)
	{
		if (i < sizes1)
			ptr[i] = s1[i];
		else
		{
			ptr[i] = s2[j];
			j++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
