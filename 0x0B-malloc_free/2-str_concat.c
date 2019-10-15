#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 *
 * Return: the pointer
 */

char *str_concat(char *s1, char *s2)
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

fifi = malloc((c + d + 1) * sizeof(char));

if (fifi == NULL)
{
	return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
	fifi[i] = s1[i];
}
for (i = 0; s2[i] != '\0'; i++)
{
	fifi[c + i] = s2[i];
}
fifi[c + d] = '\0';
return (fifi);

}
