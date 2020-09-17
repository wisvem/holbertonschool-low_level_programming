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
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
