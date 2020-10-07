#include "holberton.h"

/**
* factorial - returns the factorial of a given number
* @n: the number
* Return: the factorial
**/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (1);
	}
}
