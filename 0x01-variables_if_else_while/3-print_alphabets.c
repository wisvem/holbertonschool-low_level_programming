#include <stdio.h>

/**
  * main - Entry point
  * print alfabet with putchar
  * Return: Always 0 (sccess)
  **/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
