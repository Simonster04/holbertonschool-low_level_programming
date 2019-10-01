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
n = 0;

while (a[n] != '\0')
{
n += 1;
}


for (x = 0; x < (n - 1); x++)
{

printf("%d", a[x]);
if (x < (n - 2))
{
printf(", ");

}
}
printf("\n");
}
