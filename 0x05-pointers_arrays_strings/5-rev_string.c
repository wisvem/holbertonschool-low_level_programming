#include "holberton.h"

/**
* rev_string - reverse a string
* @s: string
**/
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char tmp[100];

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		tmp[j] = s[i - 1 - j];
	}
	s = tmp;
}
