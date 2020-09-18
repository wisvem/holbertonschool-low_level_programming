#include <stdio.h>

/**
 * main - Entry point
 * print base 10 numbers
 * Return: Always 0 (Success)
**/
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
