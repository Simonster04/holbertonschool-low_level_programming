#include "holberton.h"

/**
 * _strcat - returns the length of a string
 * @src: source array
 * @dest: destination array
 * Return: 0.
 */

char *_strcat(char *dest, char *src)
{

int i;
int c = 0;

while (dest[c] != '\0')
{
c += 1;
}

for (i = 0; src[i] != '\0'; i++)
{
dest[c + i] = src[i];
}
return (dest);
}
