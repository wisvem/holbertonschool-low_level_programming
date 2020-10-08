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
* comparar - compare two string
* @s1: string 1
* @s2: string 2
* Return: 1 for equal, 0 different
**/
int comparar(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2 || *s1 == '*' || *s2 == '*')
	{
		return (1 * comparar(s1 + 1, s2 + 1));
	}
}

/**
* wildcmp - comare two string
* @s1: string 1
* @s2: string 2
* Return: 1 similar, 0 not similar
**/
int wildcmp(char *s1, char *s2)
{
	int ls1 = _strlen_recursion(s1);
	int ls2 = _strlen_recursion(s2);

	if (ls1 != ls2)
	{
		return (0);
	}
	else
	{
		ls2 = (comparar(s1, s2));
		if (ls2 == 1)
		{
			return (ls2);
		}
		else
		{
			return (0);
		}
	}
}
