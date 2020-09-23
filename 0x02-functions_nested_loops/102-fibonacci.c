#include <stdio.h>

/**
* main - fibonacci
**/
int main(void) 
{
	long a = 1;
	long b = 2;
	int i;
	long c;


	for (i = 1; i <= 50; ++i) 
	{
		if (i == 50)
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
	return 0;
}
