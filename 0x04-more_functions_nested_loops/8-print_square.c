#include "holberton.h"

/**
 * print_square -  prints a square, followed by a new line
 * @size: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_square(int size)
{

int x;
int y;

if (size > 0)
{

for (y = 1; y <= size; y++)
{
	for (x = 1; x <= size; x++)
	{
	_putchar('#');
	}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
