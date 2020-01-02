#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - all natural numbers from n to 98
 * @n: The starting character
 *
 * Return: On success n - 98.
 * On error, 0 is returned.
 */

void print_to_98(int n)
{

int i;
int j;
int y = 98;

if (n <= y)
{

	for (i = n; i <= y; i++)
	{
		if (i != y)
		{
		printf("%d, ", i);
		}
		else
		{
		printf("%d\n", i);
		}
	}
}
else
{
	for (j = n; j >= y; j--)
	{
		if (j != y)
		{
		printf("%d, ", j);
		}
		else
		{
		printf("%d\n", j);
		}

	}
	}
}
