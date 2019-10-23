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

	unsigned int x;

	if (size == 0 || array == '\0')
	{
		return;
	}

	for (x = 0; x < size; x++)
	{
	action(array[x]);
	}
}
