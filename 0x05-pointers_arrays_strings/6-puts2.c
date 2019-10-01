#include "holberton.h"
#include <string.h>

/**
 * puts2 - prints every other char of a string, starting with the first char
 * @str: pointer to print
 *
 * Return: no return.
 */

void puts2(char *str)
{
int x = 0;

while (*str != '\0')
{
	for(int i = 0; i < strlen(p); i+=2)
	{
	putchar(p[i]);
	s[i/2]=p[i];
	}
str++;
}
_putchar('\n');
}

