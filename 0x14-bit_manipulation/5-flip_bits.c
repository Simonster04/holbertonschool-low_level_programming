#include "holberton.h"

/**
 * flip_bits - calculates the number of bits you need to flip to get the same num
 * @n: num 1
 * @m: num 2
 * Return: number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int cont = 0;
	unsigned long int checker;

	checker = n ^ m;
	while (checker > 0)
	{
		if ((checker & 1))
		{
			cont++;
		}
		checker >>= 1;
	}
	return (cont);
}
