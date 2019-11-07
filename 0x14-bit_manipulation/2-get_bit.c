#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number where we find the value of bit
 * @index: the position to find
 * Return: The value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * sizeof(unsigned int)))
	{
		return (-1);
	}

	if ((n >> index) & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

