#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 *
 * Return: the pointer
 */

int **alloc_grid(int width, int height)
{

int **x = NULL;
int i;
int j;

if (height <= 0 || width <= 0)
{
	return (NULL);
}

x = (int **)malloc(height * sizeof(int*));

if (x == NULL)
{
        return (NULL);
}

for (i = 0; i < height; i++)
{
	x[i] = (int*)malloc(width * sizeof(int));
}

	for (i = 0; i < height; i++)
	{
		_putchar('\n');

		for (j = 0; j < width; j++)
		{
			_putchar(0 + '0');
		}
	}
	return 0;
}

