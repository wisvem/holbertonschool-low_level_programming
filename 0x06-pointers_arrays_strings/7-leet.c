#include "holberton.h"

/**
* leet - encode string
* @str: string to encode
* Return: the string decoded
**/
char *leet(char *str)
{
	int i = 0, j;
	char alph[] = {"aAeEoOtTlL"};
	char nums[] = {"4433007711"};

	while (str[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == alph[j])
			{
				str[i] = nums[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
