#include "holberton.h"
#include <stdio.h>
#include <math.h>

/**
* _atoi - string to int
* @s: string
* Return: int
**/
int _atoi(char *s)
{
	unsigned int i = 0, lenght = 0, init, finish, num, d, sign, sum = 0;

	while (s[lenght] != '\0')
	{
		lenght++;
	}
	for (i = 0; i < lenght; i++)
	{
		if (s[i] == '-')
		{
			sign++;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			init = i;
			break;
		}
	}
	for (; i < lenght; i++)
	{
		if (s[i] < 48 || s[i] > 57)
		{
			break;
		}
	}
	printf("%c\n", sign);
	finish = i - 1;
	for (init; init <= finish; init++)
	{
		d = str[init] - '0';
		num = pow(10, finish - init) * d;
		sum = num + sum;
	}
	if (sign % 2 == 1)
	{
		sum = -sum;
	}
	return (sum);
}
