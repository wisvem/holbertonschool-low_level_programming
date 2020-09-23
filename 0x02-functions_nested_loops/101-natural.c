#include <stdio.h>

/**
 *main- main
 *
 *Return: 0 if success
 */

int main(void)
{
	int i;
	int j = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 5 == 0) || (i % 3 == 0))
			j = i + j;
	}
	_putchar('\n');
	printf("%i", j);
	return (0);
}
