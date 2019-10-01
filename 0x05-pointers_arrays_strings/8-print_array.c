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
int cont;

while (a[n] != '\0')
{
n += 1;
}

cont = n - 1;

for (x = 0; x < cont; x++)
{

if (x < (cont - 1))
{
printf("%d, ", a[x]);
}
else
{
printf("%d\n", a[x]);
}

}
}
