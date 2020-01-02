#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer
 * @b: constant byte
 * @n: amount of bytes
 *
 * Return: a pointer to the memory area s.
 */


char *_memset(char *s, char b, unsigned int n)
{

unsigned int x;

for (x = 0; x < n; x++)
{

	s[x] = b;

}

return (s);

}
