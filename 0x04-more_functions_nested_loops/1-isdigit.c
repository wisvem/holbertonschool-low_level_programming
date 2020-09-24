#include "holberton.h"

/**
* _isdigit - checks for a digit
* @c: digit to check
* Return: 1 for digit 0 for no digit
**/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
