#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 *
 * Return: No.
 * On error - returned.
 */

void times_table(void)
{

int x = 0;
int y = 0;
int mult;

for (x = 0; x <= 9; x++)
{
	for (y = 0; y <= 9; y++)
	{
	mult = y * x;

		if (mult >= 10)
		{
		_putchar((mult / 10) + '0');
		_putchar((mult % 10) + '0');

			if (y != 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		else
		{
		_putchar(mult + '0');

			if (y != 9)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
}
