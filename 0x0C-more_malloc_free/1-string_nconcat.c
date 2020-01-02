#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings until n
 * @s1: string
 * @s2: string
 * @n: amount of bytes of s2 that shoul be copied
 * Return: the pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

char *fifi = NULL;
unsigned int i, c, d;

if (s1 == '\0')
{
s1 = "";
}
if (s2 == '\0')
{
s2 = "";
}
for (c = 0; s1[c] != '\0'; c++)
{
}
for (d = 0; s2[d] != '\0'; d++)
{
}
if (n >= d)
{
	n = d;
}
fifi = malloc((c + n + 1) * sizeof(char));

if (fifi == NULL)
{
	return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
	fifi[i] = s1[i];
}
for (i = 0; i < n; i++)
{
	fifi[c + i] = s2[i];
}
fifi[c + n] = '\0';
return (fifi);
}
