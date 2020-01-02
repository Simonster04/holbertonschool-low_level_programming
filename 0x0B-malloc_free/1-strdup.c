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

char *fifi;
unsigned int i;
unsigned int c = 0;

if (str == NULL)
{
	return (NULL);
}

while (str[c] != '\0')
{
	c++;
}

fifi = NULL;
fifi = malloc(sizeof(char) * (c + 1));
if (fifi == NULL)
{
	return (NULL);
}

for (i = 0; str[i] != '\0'; i++)
{
	fifi[i] = str[i];
}


fifi[i] = '\0';
return (fifi);

}
