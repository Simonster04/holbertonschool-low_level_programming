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
unsigned int i;
unsigned int c = 0;

while (s1[c] != '\0')
{
	c += 1;
}

unsigned int d = 0;

while (s2[d] != '\0')
{
	d += 1;
}

fifi = malloc((c + d + 1)*sizeof(char));

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
