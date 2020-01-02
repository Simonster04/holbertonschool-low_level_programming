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

while (s[y] != '\0')
{
y += 1;
}


for (x = (y - 1); x >= 0; x--)
{
_putchar(s[x]);
}
_putchar('\n');
}
