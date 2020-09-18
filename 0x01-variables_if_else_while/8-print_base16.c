#include <stdio.h>

/**
 * main - Entry point
 * print base 16 numbers
 * Return: Always 0 (Success)
**/
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	for (ch = 'a'; ch < 'g'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
