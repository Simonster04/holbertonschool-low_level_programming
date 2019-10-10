#include "holberton.h"

/**
 * _sqrt_calculation - calculate the natural square root of a number.
 * @n: number
 * @i: iterator
 * Return: square root of n.
 */

int _sqrt_calculation(int n, int i)
{

if ((i * i) == n)
{
return (i);
}

if ((i * i) < n)
{
return (_sqrt_calculation(n, (i + 1)));
}

return (-1);

}


/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return: square root of n.
 */

int _sqrt_recursion(int n)
{

if (n < 0)
{
return (-1);
}

return (_sqrt_calculation(n, 1));

}
