#include "holberton.h"
#include <stdio.h>

/**
* _atoi - string to int
* @s: string
* Return: int
**/
int _atoi(char *s)
{
	unsigned int i = 0, lenght = 0, init, finish, num = 1, d, sign = 0, sum = 0;

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
/*	printf("%c\n", sign); */
	finish = i - 1;
	for (; init <= finish; init++)
	{
		d = s[init] - '0';
		num = 1;
		for (i = 0; i < finish - init ; i++)
		{
			num = num * 10;
		}
		num = num * d;
		sum = num + sum;
	}
	num = 1;
	if (sign % 2 == 1)
	{
		sum = sum * -1;
	}
	return (sum);
}
