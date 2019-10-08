#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - gets the length of a prefix substring
 * @a: source array
 * @size: destination array
 *
 * Return: 0.
 */

void print_diagsums(int *a, int size)
{

int x, y, sumd1, sumd2;

sumd1 = 0;
sumd2 = 0;

for (x = 0; x < size; x++)
{
	for (y = 0; y < size; y++)
	{
	if (x == y)
	{
	sumd1 = sumd1 + a[x + y];
	}
	}
}


for (x = 0; x < size && y >= 0; x++)
{
sumd2 = sumd2 + a[x + y];
y--;
}

printf("%d, %d\n", sumd1, sumd2);

}
