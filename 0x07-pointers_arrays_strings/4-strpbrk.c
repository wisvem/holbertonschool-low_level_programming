#include "holberton.h"

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: string
* @accept: string
* Return: a pointer
**/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j = 0, find = 0;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0 ; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				find++;
				break;
			}
		}
		if (find == 1)
		{
			break;
		}
	}
	p = (s + i);
	return (p);
}
