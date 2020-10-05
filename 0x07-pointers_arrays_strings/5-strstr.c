#include "holberton.h"

/**
* _strstr - find a string inside a string
* @haystack:  source string
* @needle: string to find
* Return: pointer to first occurence else null
**/
char *_strstr(char *haystack, char *needle)
{
	int size_h = 0, size_n = 0, i, j;
	char *p = '\0';

	while (haystack[size_h] != '\0')
	{
		size_h++;
	}
	while (needle[size_n] != '\0')
	{
		size_n++;
	}
	if (size_n > size_h)
		return (p);
	for (i = 0; i < size_h; i++)
	{
		if (haystack[i] == needle[j])
		{
			j++;
		}
		else
		{
			j = 0;
		}
	}
	if (j == size_n)
	{
		p = (haystack +  (size_h - j));
		return (p);
	}
	return (p);
}
