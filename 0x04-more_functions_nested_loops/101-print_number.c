#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_number(int n)
{

if (n >= 1000)
{
_putchar((n / 1000) + '0');
_putchar((n / 100) + '0');
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
else if (n >= 100)
	{
	_putchar((n / 100) + '0');
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
	}
	else if (n >= 10)
		{
		_putchar((n / 10) + '0');
        	_putchar((n % 10) + '0');
		}
		else
		{
		_putchar((n / 10) + '0');
        	_putchar((n % 10) + '0');
		}
}
