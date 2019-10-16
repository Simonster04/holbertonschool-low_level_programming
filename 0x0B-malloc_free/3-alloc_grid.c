#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid -  pointer to a 2 dimensional array of integers
 * @width: colums
 * @height: rows
 *
 * Return: the 2dimensional array
 */

int **alloc_grid(int width, int height)
{

int **x = NULL;
int i;

if (height <= 0 || width <= 0)
{
	return (NULL);
}

x = malloc(height * sizeof(int *));

if (x == NULL)
{
	return (NULL);
}

for (i = 0; i < height; i++)
{
	x[i] = malloc(width * sizeof(int));
	if (x[i] == NULL)
	{
		return (NULL);
	}
}
	return (x);
}

