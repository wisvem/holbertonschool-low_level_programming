#include <stdio.h>

/**
* main - fibonacci :(
* Return: 0 success
**/
int main(void)
{
	unsigned long a = 1;
	unsigned long b = 2;
	int i;
	unsigned long c;

	printf("%lu, ", a);
	for (i = 1; i <= 97; ++i)
	{
		c = a + b;
		a = b;
		b = c;
		if (i == 97)
		{
			printf("%lu\n", a);
		}
		else
		{
			printf("%lu, ", a);
		}
	}
	return (0);
}
