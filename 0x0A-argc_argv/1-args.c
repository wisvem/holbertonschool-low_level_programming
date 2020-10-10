#include <stdio.h>

/**
* main - prints the number of arguments passed into it
* @argc: arguments count
* @argv: arguments vector
* Return: 0 success
**/
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc-1);
	return (0);
}
