#include "holberton.h"

/**
* rot13 -  encodes a string using rot13
* @str: string to encode
* Return: string encoded
*/
char *rot13(char *str)
{
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, j;

	while (str[i] != '\0')
	{
		for (j = 0; j <= 52; j++)
		{
			if (str[i] == input[j])
			{
				str[i] = output[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
