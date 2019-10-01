#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to print
 *
 * Return: no return.
 */

void puts_half(char *str)
{

int y = 0;
int x;

while (str[y] != '\0')
{
y += 1;
}

if ((y % 2) == 0)
{
	for (x = (y / 2); x < y; x++)
	{
	_putchar(str[x]);
	}
}
else
{
for (x = ((y + 1) / 2); x < y; x++)
        {
        _putchar(str[x]);
        }

}
_putchar('\n');


}

