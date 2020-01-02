#include "holberton.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_triangle(int size)
{

int x;
int y;

if (size > 0)
{
	for (x = 1; x <= size; x++)
	{
		for (y = size; y >= 1; y--)
		{
		if (y <= x)
		{
		_putchar('#');
		}
		else
		{
		_putchar(' ');
		}
		}
_putchar('\n');
	}

}
else
{
_putchar('\n');
}

}
