#include <stdio.h>

/**
* main - fibonacci :(
* Return: 0 success
**/
int main(void)
{
	int i;
	unsigned long a = 0;
	unsigned long b = 1;
	unsigned long next;
	unsigned long part1;
	unsigned long part2;
	unsigned long a2;
	unsigned long b2;

	for (i = 0; i < 91; i++)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%ld", next);
		printf(", ");
	}
	b = a % 10000; /* Last four digits of fibo number 91*/
	a = a / 10000; /* fibo number 91 without four last digits */
	a2 = next / 10000; /* */
	b2 = next % 10000;
	for (i = 0; i < 7; i++)
	{
		part2 = (b + b2) % 10000;
		if ((b + b2) > 9999)
			part1 = a + a2 + 1;
		else
			part1 = a + a2;
		a = a2;
		b = b2;
		a2 = part1;
		b2 = part2;
		printf("%lu%lu", part1, part2);
		if (i != 6)
			printf(", ");
	}
	printf("\n");
	return (0);
}
