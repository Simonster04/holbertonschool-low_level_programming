#include <stdio.h>
#include "holberton.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: 0.
 */

char *_strstr(char *haystack, char *needle)
{

int x, y;

if (*needle == '\0')
{
return (haystack);
}

for (x = 0; haystack[x] != '\0'; x++)
{
	y = 0;

	if (haystack[x] == needle[0])
	{
		while (haystack[x + y] == needle[y])
		{
			if (needle[y] == '\0')
			{
			return (&haystack[x]);
			}
			y++;
		}
		if (needle[y] == '\0')
		{
		return (&haystack[x]);
		}
	}

}

return (NULL);

}
