#include "holberton.h"

/**
 * rot13 - encodes a string into 1337
 * @s: string
 *
 *
 * Return: 0.
 */

char *rot13(char *s)
{

char src[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rep[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

int i = 0;
int j;

while (s[i] != '\0')
{

j = 0;
	while (j < 52)
	{

		if (s[i] == src[j])
		{
		s[i] = rep[j];
		break;
		}
	j++;
	}
i++;
}

return (s);
}
