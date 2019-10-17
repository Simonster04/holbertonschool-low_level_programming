#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with a char
 * @size: amount of chars
 * @c: specific char
 *
 * Return: &c
 */

void *malloc_checked(unsigned int b)
{

void *p = NULL;

p = malloc(b);
if (p == NULL)
{
	exit(98);
}

return (p);
}
