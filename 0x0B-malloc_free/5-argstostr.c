#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argc
 * @av: argv
 *
 * Return: concatenated arguments
 */

char *argstostr(int ac, char **av)
{
char *x = NULL;
int i, j, n, f;
f = 0;
n = 0;
if (ac == 0 || av == NULL)
{
	return (NULL);
}
for (i = 0; i < ac; i++)
{
	for (j = 0; av[i][j]; j++)
	{
		n += 1;
	}
	n += 1;
}
n += 1;
x = malloc(sizeof(char) * n);
if (x == NULL)
{
	return (NULL);
}
for (i = 0; i < ac; i++)
{
	for (j = 0; av[i][j] != '\0'; j++)
	{
		x[f] = av[i][j];
		f += 1;
	}
	x[f] = '\n';
	f += 1;
}
x[f] = '\0';
return (x);
}
