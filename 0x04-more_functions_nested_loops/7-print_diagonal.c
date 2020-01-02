#include "holberton.h"

/**
 * print_diagonal - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_diagonal(int n)
{

int x;
int y;

if (n > 0)
{
	for (x = 1; x <= n; x++)
	{
		for (y = 1; y <= x; y++)
		{
		if (x != y)
		{
		_putchar(' ');
		}
		else
		{
		_putchar('\\');
		_putchar('\n');
		}
		}
	}
}
else
{
_putchar('\n');
}
}
