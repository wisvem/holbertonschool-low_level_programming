#include <stdio.h>

/**
* main -  entry point
*print alfabet with putchar
* return 0, (success)
**/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return(0);
}
