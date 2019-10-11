#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: source array
 * @accept: destination array
 *
 * Return: 0.
 */

char *_strpbrk(char *s, char *accept)
{

int x, y;

for (x = 0; s[x] != '\0'; x++)
{

	for (y = 0; accept[y] != '\0'; y++)
	{

		if (s[x] == accept[y])
		{

		return (s + x);

		}
		else
		{
		continue;
		}
	}
}

return ('\0');
}

