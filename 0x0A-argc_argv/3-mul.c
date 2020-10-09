#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers
* @argc: arguments count
* @argv: arguments vector
* Return: 1 error, 0 success
**/
int main(int argc, char *argv[2])
{
	int r;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		r = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", r);
		return (0);
	}
}
