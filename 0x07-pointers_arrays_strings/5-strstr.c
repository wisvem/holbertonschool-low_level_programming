#include "holberton.h"

/**
* _strstr - find a string inside a string
* @haystack:  source string
* @needle: string to find
* Return: pointer to first occurence else null
**/
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, cont = 0;

	while (haystack[i] != '\0')
	{
		cont = i;
		j = 0;
		while (haystack[i] == needle[j] && haystack[i] != '\0')
		{
			i++;
			j++;
		}

		if (needle[j] == '\0')
		{
			return (haystack + cont);
		}
		i = cont + 1;
	}
	return ('\0');
}
