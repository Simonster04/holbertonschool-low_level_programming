#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with a char
 * @size: amount of chars
 * @c: specific char
 *
 * Return: &c
 */

char *_strdup(char *str)
{

char *fifi = NULL;
int i;
int c = 0;

while (str[c] != '\0')
{
c++;
}

if (str == NULL)
{
return (NULL);
}

fifi = malloc(sizeof(char) * c);

for (i = 0; str[i] != '\0'; i++)
{
fifi[i] = str[i];
}
return (fifi);
}
