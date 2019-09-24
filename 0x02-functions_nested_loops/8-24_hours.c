#include "holberton.h"

/**
 * jack_bauer - prints every minute from 00:00 to 23:59
 *
 *
 * Return: On success c.
 * On error, 0 is returned.
 */

void jack_bauer(void)
{

int x, y, z, w;

for (x = '0'; x <= '2'; x++)
{
	for (y = '0'; y <= '3'; y++)
	{
		for (z = '0'; z <= '5'; z++)
		{
			for (w = '0'; w <= '9'; w++)
			{
				_putchar(x);
				_putchar(y);
				_putchar(':');
				_putchar(z);
				_putchar(w);
				_putchar('\n');
			}
		}
	}
}


}
