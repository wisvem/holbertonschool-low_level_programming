#include "holberton.h"

/**
* _isupper - checks uppercase
* @c: character to check
* Return: 1 is upper 0 otherwise
*/
int _isupper(int c)
{
	int i = 65;

	while (c != i && i <= 88)
	{
		i++;
	}
	if (c != i)
		return (0);
	else
		return (1);
}
