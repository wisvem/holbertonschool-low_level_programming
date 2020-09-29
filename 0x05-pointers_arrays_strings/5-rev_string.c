#include "holberton.h"

/**
* rev_string - reverse a string
* @s: string
**/
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char tmp;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		tmp = s[j];
		s[j] = s[i - 1 - j];
	}
}
