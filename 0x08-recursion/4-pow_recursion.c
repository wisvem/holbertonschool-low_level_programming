#include "holberton.h"

/**
* _pow_recursion - x raised to the power of y
* @x: base
* @y: pow
* Return: pow x y
**/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 1)
	{
		y = _pow_recursion(x, y - 1);
	}
	else
	{
		return (x * y);
	}
	return (x * y);
}
