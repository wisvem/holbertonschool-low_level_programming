#include "holberton.h"

/**
* _isalpha - check for an alphabetic character
* @c: The character to check
* Return: 1, if c is a letter uppercase or lowercase
* 0 otherwise
**/
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
