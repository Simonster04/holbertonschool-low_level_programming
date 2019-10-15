#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - creates an array of chars and initializes it with a char
 * @str: source array
 *
 *
 * Return: &c
 */

char *_strdup(char *str)
{

char *fifi = NULL;
int i;
int c = 0;

if (str == NULL)
{
return (NULL);
}

while (str[c] != '\0')
{
c++;
}

fifi = malloc(sizeof(char) * c);

for (i = 0; str[i] != '\0'; i++)
{
fifi[i] = str[i];
}
return (fifi);
}
