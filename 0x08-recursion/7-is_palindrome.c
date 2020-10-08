#include "holberton.h"

/**
* _strlen_recursion - returns the length of a string
* @s: string
* Return: lenght of @s
**/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
/**
* palin - palindrome functio
* @s: String to evaluate
* @i: an auxiliar
* @lenght: length of @s
* Return: 1 if string is a palindrome and 0 if not.
**/
int palin(char *s, int i, int lenght)
{
	if (i == lenght)
	{
		return (1);
	}
	if (s[i] != s[lenght])
	{
		return (0);
	}
	if (i < lenght)
	{
		return (palin(s, i + 1, lenght - 1));
	}
	return (1);
}
/**
* is_palindrome - checks if a string is palindrome
* @s: String to be evaluated
* Return: 1 for palindrome, 0 no palindrome.
**/
int is_palindrome(char *s)
{
	if (_strlen_recursion(s) == 0)
	{
		return (1);
	}
	return (palin(s, 0, (_strlen_recursion(s) - 1)));
}
