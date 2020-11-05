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
	if (y == 0)
		return (1);
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
/**
* binary_to_uint - converts a binary number to an unsigned int
* Return: the converted number, or 0 if
* there is one or more chars in the string b that is not 0 or 1
* b is NULL
* @b: binary number
**/
unsigned int binary_to_uint(const char *b)
{
	int i = 0, j, exp;
	unsigned int res = 0, base = 0, pow = 0;
	while (b[i] != '\0')
	{
		if (b != NULL && (b[i] == '1' || b[i] == '0'))
			i++;
		else
			return (res);
	}
	exp = i - 1;
	for (j = 0; j < i; j++)
	{
		base = b[j] - '0';
		pow = _pow_recursion(2, exp);
		res = res + base * pow;
		exp--;
	}
	return (res);
}
