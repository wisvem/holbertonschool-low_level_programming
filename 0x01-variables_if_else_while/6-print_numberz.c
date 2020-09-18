#include <stdio.h>

/**
 * main - Entry point
 * print base 10 numbers
 * Return: Always 0 (Success)
**/
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		putchar(num + 48);
	putchar('\n');
	return (0);
}
