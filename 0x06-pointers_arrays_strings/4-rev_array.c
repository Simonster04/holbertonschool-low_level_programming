#include "holberton.h"

/**
 * reverse_array - reverse an array of ints
 * @a: source array
 * @n: number of elements of the array
 *
 * Return: 0.
 */

void reverse_array(int *a, int n)
{

int x = n;
int tmp, i;

for (i = 0; i <= x; i++)
{

tmp = a[i];
a[i] = a[x - 1];
a[x - 1] = tmp;

x--;

}


}
