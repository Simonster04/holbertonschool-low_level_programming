#include "holberton.h"

/**
 * prime_calculation - determine if it is a prime number
 * @n: number
 * @i: iterator
 * Return: 1 success.
 */

int prime_calculation(int n, int i)
{

if ((n / i) > i)
{
return (prime_calculation(n, (i + 1)));
}

if ((n / i) == i)
{
	if ((i * i) == n)
	{
	return (0);
	}
	return (1);
}

return (1);

}


/**
 * _is_prime_number - determine if it is prime number
 * @n: number
 * Return: 1 success.
 */

int is_prime_number(int n)
{

if (n <= 1)
{
return (0);
}

return (prime_calculation(n, 1));

}
