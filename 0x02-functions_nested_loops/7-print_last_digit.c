#include "holberton.h"

/**
 * print_last_digit -  prints the last digit of a number
 * @c: The character to print
 *
 * Return: On success c.
 * On error, 0 is returned.
 */

int print_last_digit(int c)
{

c = c % 10;
if (c < 0)
{
c = c * -1;
}

_putchar('0' + c);

return (c);

}
