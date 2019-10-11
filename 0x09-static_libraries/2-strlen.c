#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: char pointer
 *
 * Return: 0.
 */

int _strlen(char *s)
{

int c = 0;

while (*s != '\0')
{

c += 1;
s++;
}

return (c);
}
