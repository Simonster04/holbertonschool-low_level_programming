#include "holberton.h"

/**
 * _islower - checks for lowercase character
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, 0 is returned, and errno is set appropriately.
 */

int _islower(int c)

{
	if (c > 64 && c < 91)
	{
	return (0);
	}
	else
	{
	return (1);
	}

}

