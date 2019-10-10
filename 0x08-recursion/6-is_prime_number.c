#include "holberton.h"

/**
 * prime_calculation - returns 1 if the input is prime number
 * @n: number
 * @i: iterator
 * Return: 1 success, 0 not success.
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
 * _is_prime_number - returns 1 if the input is prime number
 * @n: number
 * Return: 1 success, 0 not success.
 */

int is_prime_number(int n)
{

if (n <= 1)
{
return (0);
}

return (prime_calculation(n, 1));

}
