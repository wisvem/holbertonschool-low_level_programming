#include <stdio.h>

/**
 * main - Entry point
 * print base 16 numbers
 * Return: Always 0 (Success)
**/
int main(void)
{
	int num;
	char ch;

	for (num = 0; num < 10; num++)
		putchar(num + 48);
	for (ch = 'a'; ch < 'g'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
