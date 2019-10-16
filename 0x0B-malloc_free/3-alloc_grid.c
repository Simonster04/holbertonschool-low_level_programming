#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 *
 * Return: the pointer
 */

int **alloc_grid(int width, int height)
{

int **x = NULL;
int i;

if (height <= 0 || width <= 0)
{
	return (NULL);
}

x = (int **)malloc(height * sizeof(int*));

if (x == NULL)
{
        return (NULL);
}

for (i = 0; i < height; i++)
{
	x[i] = (int*)malloc(width * sizeof(int));
}

	return (x);
}

