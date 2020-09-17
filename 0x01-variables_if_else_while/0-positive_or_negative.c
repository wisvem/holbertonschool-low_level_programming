#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * print if a number is positive or negative
 * Return: Always 0 (sucess)
**/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d\n is positive", a);
	}
	else
	{
		printf("%d\n is negative", a);
	}
	return (0);
}
