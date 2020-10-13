#include "holberton.h"
#include <stdlib.h>

/**
* str_concat - concatenates two strings
* @s1: string
* @s2: string
* Return: a pointer
**/
char *str_concat(char *s1, char *s2)
{
	unsigned int sizes1 = 0, sizes2 = 0, i, j = 0;
	char *ptr;

	while (s1[sizes1] != '\0')
	{
		sizes1++;
	}
		while (s2[sizes2] != '\0')
	{
		sizes2++;
	}

	ptr = malloc(sizeof(char) * (sizes1 + sizes2 + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= sizes1 + sizes2; i++)
	{
		if (i < sizes1)
		{
			ptr[i] = s1[i];
		}
		else
		{
			ptr[i] = s2[j];
			j++;
		}
	}
	return (ptr);
}
