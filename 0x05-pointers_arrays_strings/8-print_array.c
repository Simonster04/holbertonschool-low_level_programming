#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: char pointer
 * @n: char pointer
 * Return: No return.
 */

void print_array(int *a, int n)
{

int x;

for (x = 0; x < n; x++)
{
printf("%d", a[x]);

if (x < (n - 1))
{
printf(", ");
}
else
{
printf("\n");
}
}
}
