#include <stdio.h>

/**
* main - Entry point
* print alfabet reversed
* Return: Always 0 (sccess)
**/
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
