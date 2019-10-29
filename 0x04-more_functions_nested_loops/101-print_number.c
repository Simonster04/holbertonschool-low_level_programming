#include "holberton.h"

/**
 * print_number - prints an integer.
 * @n: The character to print
 *
 * Return: void.
 */

void print_number(int n)
{

	int tmp = 0;

	if (n < 0)
	{
		tmp = n * -1;
		_putchar('-');
	}

	if (tmp / 10 != '\0')
	{
		print_number(tmp / 10);
	}

	_putchar((tmp % 10) + '0');
}
