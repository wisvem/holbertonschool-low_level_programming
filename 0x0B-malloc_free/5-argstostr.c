#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: arguments array
 * Return: pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, x = 0, count = 0;
	char *ptr;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			count++;
		}
		count++;
	}
	count++;
	ptr = malloc(count * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[x] = av[i][j];
			x++;
		}
		ptr[x] = '\n';
		x++;
	}
	ptr[x] = '\0';
	return (ptr);
}