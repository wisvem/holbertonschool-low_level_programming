#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argc
 * @av: argv
 * Return: pointer to new string
 */

char *argstostr(int ac, char **av)
{
	int i, j, len = 0, k = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	ptr = malloc(len + 1 * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++, k++)
	{
		for (j = 0; av[i][j]; j++, k++)
		{
			ptr[k] = av[i][j];
		}
		ptr[k] = '\n';
	}
	return (ptr);
}
