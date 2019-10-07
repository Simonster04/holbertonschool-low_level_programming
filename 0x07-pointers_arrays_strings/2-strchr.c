#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: char to be located
 *
 * Return: pointr to the first occur of o char c in s or \0 if char not found
 */


char *_strchr(char *s, char c)
{

int x;

for (x = 0; s[x] != '\0'; x++)
	{
	if (s[x] == c)
	{
	return (s + x);
	}
	}

if (s[x] == c)
{
return (s + x);
}
else
{
return ('\0');
}

}

