#include "holberton.h"

/**
* _memset - fills memory
* @s: array
* @b: char
* @n: unsigned int
* Return: array
**/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		s[i] = b;
	}
	return (s);
}
