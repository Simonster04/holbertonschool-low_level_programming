#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @size: size of arrat
 * @array: pointer
 * @action: pointer to function
 *
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	size_t x;

	if (size == 0 || array == NULL)
	{
		return;
	}

	for (x = 0; x < size; x++)
	{
	action(array[x]);
	}
}
