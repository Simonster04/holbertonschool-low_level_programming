#include "holberton.h"

int _pow_recursion(int x, int y);

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_num = 0, len = 0, cont, num;


	if (!b)
	{
		return (0);
	}

	while (b[len])
	{
		len++;
	}

	for (cont = 0; b[cont]; cont++)
	{
		if (b[cont] == 48)
		{
			num = 0;
		}
		else if (b[cont] == 49)
		{
			num = 1;
		}
		else
		{
			return (0);
		}

		dec_num += (num * _pow_recursion(2, (len - 1)));
		len--;
	}

	return(dec_num);
}

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: int
 * @y: int
 * Return: x power to y.
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (x == 0)
	{
		return (0);
	}
	return (x * _pow_recursion(x, y - 1));
}
