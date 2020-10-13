#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument counter
 * @av: argument vector
 * Return: resultating string
 */

char *argstostr(int ac, char **av)
{

int i, j, k = 0, countComplete = 0;
char *s;

if (ac <= 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
countComplete++;
}
countComplete++;
}
countComplete++;

s = malloc(countComplete *sizeof(char));

if (s == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
s[k] = av[i][j];
k++;
}
s[k] = '\n';
k++;
}

s[k] = '\0';
return (s);
}