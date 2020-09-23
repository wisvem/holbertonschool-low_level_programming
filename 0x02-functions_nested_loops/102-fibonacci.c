#include <stdio.h>

/**
* main - fibonacci
**/
int main(void) 
{
	int a = 1;
	int b = 2;
	int i;
	int c;


	for (i = 1; i <= 50; ++i) 
	{
		if (i == 50)
		{
			printf("%d\n", a);
		}
		else
		{
			printf("%d, ", a);
		}
		c = a + b;
		a = b;
		b = c;
	}
	return 0;
}
