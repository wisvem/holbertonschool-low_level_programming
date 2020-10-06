#include "holberton.h"

/**
* _strspn - gets the length of a prefix substring
* @s: source
* @accept: string to find
* Return: bytes
**/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, cont = 0, find = 0;

	while (accept[i] != '\0')
	{
		while (s[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				find = 1;
				break;
			}
			j++;
		}
		if (find == 1)
		{
			cont++;
		}
		else
		{
			break;
		}
		i++;
	}
	return (cont);
}
