#include "holberton.h"

/**
 * _strncpy - copies a string
 * @src: source array
 * @dest: destination array
 * @n: amount of bytes
 * Return: 0.
 */

char *_strncpy(char *dest, char *src, int n)
{

int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);

}
