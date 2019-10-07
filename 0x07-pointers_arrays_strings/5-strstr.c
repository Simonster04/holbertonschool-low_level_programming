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

int x, y, i;

for (x = 0; haystack[x] != '\0'; x++)
{
	y = 0;

	if (haystack[x] == needle[y])
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
		}

		return (needle);

	}
	y++;
}
return ('\0');

}
