#include "holberton.h"

/*
 * _strchr - locates a character in a string
 * @s: string
 * @c: char to be located
 *
 * Return:  a pointer to the first occurrence of the char c in s, or NULL if char not found
 */


char *_strchr(char *s, char c)
{

int x, j, n;

while (s[n] != '\0')
{
n += 1;
}

char dest[n];

for (x = 0; s[x] <= c; x++)
{
	if(s[x] == c)
	{
	j = 0;
	 = s[x]
	= ;
	}
}

for (j = x; s[x] != '\0'; j++)
{
	dest[j] = s[x];
x++;
}

return(dest);
}

