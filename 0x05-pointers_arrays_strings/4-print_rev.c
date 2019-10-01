#include "holberton.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: char pointer
 *
 * Return: No return.
 */

void print_rev(char *s)
{

int x;
int y = 0;

while (*s != '\0')
{
y += 1;
s++;
}

for (x = y; x >= 0; x--)
{
_putchar(s[(x - 1)]);
}
_putchar('\n');
}
