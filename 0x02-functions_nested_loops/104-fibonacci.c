#include <stdio.h>

/**
* main - fibonacci
* Return: 0 success
**/
int main(void)
{
	long a = 1;
	long b = 2;
	int i;
	long c;

	for (i = 1; i <= 98; ++i)
	{
		if (i == 98)
		{
			printf("%ld\n", a);
		}
		else
		{
			printf("%ld, ", a);
		}
		c = a + b;
		a = b;
		b = c;
	}
	return (0);
}
