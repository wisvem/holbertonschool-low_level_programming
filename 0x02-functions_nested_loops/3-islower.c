#include "holberton.h"

/**
* _islower - entry point
* @c: parameter
* Return: 0 (Letter found) 1 (Letter not found)
**/
int _islower(int c)
{
	int i = 97;

	while (c != i && i <= 120)
	{
		i++;
	}
	if (c != i)
		return (0);
	else
		return (1);
}
