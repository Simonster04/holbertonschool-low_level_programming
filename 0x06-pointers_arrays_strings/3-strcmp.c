#include "holberton.h"

/**
 * _strcmp - compare two strings
 * @s1: array
 * @s2: array
 *
 * Return: 15 if first is bigger, 0 or -15.
 */

int _strcmp(char *s1, char *s2)
{

int c = 0;
int d = 0;

while (s1[c] != '\0')
{
c += 1;
}

while (s2[d] != '\0')
{
d += 1;
}

if (c < d)
{
return (-15);
}
else if (c == d)
	{
	return (0);
	}
	else
	{
	return (15);
	}

}
