#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings until n
 * @s1: string
 * @s2: string
 * @n: amount of bytes of s2 that shoul be copied
 * Return: the pointer
 */

int *array_range(int min, int max)
{

int *fifi = NULL;
int i;

if (min > max)
{
	return (NULL);
}

fifi = malloc((max - min + 1) * sizeof(int));

if (fifi == NULL)
{
	return (NULL);
}

for (i = 0; i < (min - max); i++)
{
	fifi[i] = i;
}

return (fifi);

}
