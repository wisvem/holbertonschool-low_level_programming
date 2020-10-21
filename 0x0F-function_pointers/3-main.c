#include "3-calc.h"
#include <errno.h>

/**
* main - calculates two numbers
* @argc: arguments count
* @argv: arguments vector
* Return: 1 error, 0 success
**/
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
