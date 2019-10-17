#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: elements
 * @size: size bytes
 *
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

void *p = 0;

if (nmemb == 0 || size == 0)
{
        return (NULL);
}

p = malloc(nmemb * size);

if (p == NULL)
{
        return (NULL);
}

return (p);
}

