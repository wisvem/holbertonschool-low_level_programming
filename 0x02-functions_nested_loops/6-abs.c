#include "holberton.h"

/**
* _abs - compute absolute value of a number
* Return: the absolute value
* @x: number
**/
int _abs(int x)
{
	if (x > 0)
	{
		return (x);
	}
	else
	{
		return (x * -1);
	}
}
