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
	int pos;

	while (s[i] != '\0')
	{
		i++;
	}
	pos = i - 1;
	for (pos = i - 1; pos >= i / 2; pos--)
	{
		tmp = s[pos];
		s[pos] = s[j];
		s[j] = tmp;
		j++;
	}
}
