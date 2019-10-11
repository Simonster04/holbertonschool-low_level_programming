#include "holberton.h"

/**
 * _memcpy - copies memory area
 * @src: pointer to array source
 * @dest: pointer to array destiny
 * @n: amount of bytes
 *
 * Return: a pointer to dest.
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{

unsigned int x;

for (x = 0; x < n; x++)
{

	dest[x] = src[x];

}

return (dest);

}
