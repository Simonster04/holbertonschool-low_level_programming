#include "holberton.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void more_numbers(void)
{

int x, y;

for (x = 0; x <= 9; x++)
{
	for (y = 0; y <= 14; y++)
	{
		if (y < 10)
		{
		_putchar(y + '0');
		}
		else
		{
		_putchar('0' + (y / 10));
		_putchar('0' + (y % 10));
		}
	}
_putchar('\n');
}


}
