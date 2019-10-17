#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 *
 * Return: allocated memory
 */

int *array_range(int min, int max)
{

int *fifi = NULL;

if (min > max)
{
	return (NULL);
}

fifi = malloc((max - min) * sizeof(int));

if (fifi == NULL)
{
	return (NULL);
}


return (fifi);

}
