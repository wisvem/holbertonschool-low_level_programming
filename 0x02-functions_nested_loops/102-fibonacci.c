#include <stdio.h>

/**
* main - fibonacci
**/
int main(void) 
{
	int a = 0;
	int b = 1;
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
