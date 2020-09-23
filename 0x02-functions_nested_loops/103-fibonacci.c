#include <stdio.h>

/**
* main - fibonacci
* Return: 0 success
**/
int main(void)
{
	long a = 1;
	long b = 2;
	int i = 0;
	long c;

	while (a <= 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if (a % 2 == 0)
		{
			i = i + a;
		}
	}
	printf("%ld\n", i);
	return (0);
}
