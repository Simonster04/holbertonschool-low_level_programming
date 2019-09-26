#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_line(int n)
{

int x;

if (n > 0)
{
	for (x = 0; x <= n; x++)
	{
	_putchar('_');
	}

_putchar('\n');
}

else
{
_putchar('\n');
}
}
