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

for (x = 63; x >= 0; x--)
{
_putchar(s[(x - 1)]);

}
_putchar('\n');
}
