#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer
 * @size: size of an array
 * @cmp: pointer to a function
 *
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
	return (-1);
	}

	for (x = 0; x < size; x++)
	{
		if ((*cmp)(array[x]))
		{
		return (x);
		}
	}

	return (-1);
}
