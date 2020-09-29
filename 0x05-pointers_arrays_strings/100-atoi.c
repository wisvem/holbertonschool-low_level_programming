#include <stdio.h>

/**
* _atoi - string to int
* @s: string
* Return: int
**/
int _atoi(char *s)
{
	char *str;
	int i = 0, j = 0;
	char *aux;

	aux = str;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			printf("%c", str[i]);
		}
		else
		{
		}
		i++;
	}
	return (0);

}
