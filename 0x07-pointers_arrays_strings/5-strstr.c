#include "holberton.h"

/**
* _strstr - find a string inside a string
* @haystack:  source string
* @needle: string to find
* Return: pointer to first occurence else null
**/
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	for (i = 0; haystack[i]; i++)
	{
		j = 0;
		while (needle[j] && haystack[i + j] == needle[j])
		{
			j++;
		}
		if (j > 0)
		{
			if (needle[j])
			{
				return (haystack + i);
			}
		}
	}
	return ('\0');
}
