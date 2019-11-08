#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: given number
 * @index: position to return
 * Return: 1 on success, -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * sizeof(unsigned int)))
	{
		return (-1);
	}

	if (!((*n << index) & 0))
	{
		*n ^= (1 << index);
	}

	return (1);
}
