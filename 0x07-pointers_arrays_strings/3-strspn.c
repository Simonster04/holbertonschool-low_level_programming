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
unsigned int cont = 0;

for (x = 0; s[x] != '\0' || s[x] != ' ' || s[x] != ','; x++)
{

	for (y = 0; accept[y] != '\0'; y++)
	{
	if (accept[y] == s[x])
	{
	cont += 1;
	}
	}
}

return (cont);
}

