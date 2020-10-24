#include "variadic_functions.h"

/**
* sum_them_all - sum of all its parameters
* @n: number of parameters
* Return: the sum of all its parameters
**/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, res = 0;
	va_list parameters;

	if (n != 0)
	{
		va_start(parameters, n);
		for (i = 0; i < n; i++)
		{
			res = res + va_arg(parameters, int);
		}
		va_end(parameters);
		return (res);
	}
	return (n);
}
