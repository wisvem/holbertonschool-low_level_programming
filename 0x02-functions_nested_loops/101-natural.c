#include <stdio.h>

/**
* main- entry point
* Return: 0 success
**/
int main(void)
{
	int i;
	int j = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 5 == 0) || (i % 3 == 0))
			j = i + j;
	}
	printf("%d\n", j);
	return (0);
}
