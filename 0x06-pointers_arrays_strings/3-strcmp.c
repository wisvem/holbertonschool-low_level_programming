#include "holberton.h"

/**
* _strcmp - compare two strings
* @s1: string 1
* @s2: string 2
* Return: res
**/
int _strcmp(char *s1, char *s2)
{
	int i = 0, res;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		res = 0;
		i++;
	}
	res = s1[i] - s2[i];
	return (res);
}
