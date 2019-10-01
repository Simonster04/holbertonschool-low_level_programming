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
int j = 0;

while (a[j] != '\0')
{
n = j + 1;
j++;
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
