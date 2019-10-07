#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: source array
 * @accept: destination array
 *
 * Return: 0.
 */

unsigned int _strspn(char *s, char *accept)
{

int x, y;
unsigned int cont;

for (x = 0; s[x]; x++)
{

if (s[x] == ',')
{
break;
}
else
{

	for (y = 0; accept[y] != '\0'; y++)
	{
		if (s[x] == accept[y])
		{
		cont++;
		}
		else
		{
		continue;
		}
	}
}
}
return (cont);
}

