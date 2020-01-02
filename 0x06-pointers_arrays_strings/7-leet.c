#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 *
 *
 * Return: 0.
 */

char *leet(char *s)
{

char src[] = "aAeEoOtTlL";
char rep[] = "43071";

int i = 0;
int j, m;

while (s[i] != '\0')
{

j = 0;
m = 0;
	while (src[j] != '\0')
	{

		if (s[i] == src[j])
		{
		m = j;
		s[i] = rep[m / 2];
		}
	j++;
	}
i++;
}

return (s);
}
