#include "holberton.h"

/**
* cap_string - capitalizes all words of a string
* @str: string
* Return: a string
**/
char *cap_string(char *str)
{
	int i = 0, j;
	char sim[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			for (j = 0; j <= 12; j++)
			{
				if (str[i - 1] == sim[j])
				{
					str[i] = str[i] - 32;
				}
			}
		}
		i++;
	}
	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str[0] - 32;
	return (str);
}
