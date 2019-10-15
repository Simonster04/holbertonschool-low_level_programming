#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with a char
 * @size: amount of chars
 * @c: specific char
 *
 * Return: &c
 */

char *create_array(unsigned int size, char c)
{

char *fifi = NULL;
unsigned int i;

fifi = malloc(sizeof(char) * size);

if (size == 0 || fifi == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
fifi[i] = c;
}

return (fifi);

}
