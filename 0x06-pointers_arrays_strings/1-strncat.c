#include "holberton.h"

/**
 * _strcat - returns the length of a string
 * @src: source array
 * @dest: destination array
 * Return: 0.
 */

char *_strncat(char *dest, char *src, int n)
{

int i;
int c = 0;

while (dest[c] != '\0')
{
c += 1;
}

for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[c + i] = src[i];
}

dest[c + i] = '\0';

return (dest);
}
