#include <stdio.h>
#include "holberton.h"
/**
* main - fibonacci
* Return: 0 success
**/
int main(void)
{
	double a = 1;
	double b = 2;
	int i;
	double c;

	for (i = 1; i <= 98; ++i)
	{
		if (i == 98)
		{
			printf("%f\n", a);
		}
		else
		{
			printf("%f, ", a);
		}
		c = a + b;
		a = b;
		b = c;
	}
	return (0);
}
