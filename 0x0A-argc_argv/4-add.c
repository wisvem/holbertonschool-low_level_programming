#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

/**
* main - adds positive integers
* @argc: arguments count
* @argv: arguments vector
* Return: 1 error, 0 success
**/
int main(int argc, char *argv[])
{
	int r = 0, i;
	char *ptr;

	if (argc == 0)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			r = r + strtol(ptr, &ptr, 10);
			if (*ptr != '\0')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", r);
	return (0);
}
