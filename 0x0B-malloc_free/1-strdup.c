#include "holberton.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory
* @str: string
* Return: a copy of str
**/
char *_strdup(char *str)
{
	int i = 0, j;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	ptr = malloc(sizeof(char) * i);

	if (ptr == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		ptr[j] = str[j];
	}
	ptr[j] = str[j];
	return (ptr);
}
