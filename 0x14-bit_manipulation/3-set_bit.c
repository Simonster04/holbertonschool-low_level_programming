#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: given number
 * @index: position to return
 * Return: 1 on success, 0 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * sizeof(unsigned int)))
	{
		return (0);
	}

	if (!((*n << index) & 1))
	*n ^= (1 << index);

	return (1);
}
