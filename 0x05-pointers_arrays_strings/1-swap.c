#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to print
 * @b: pointer to print
 *
 * Return: no return.
 */

void swap_int(int *a, int *b)
{

int c = *a;
int d = *b;
*a = d;
*b = c;

}
