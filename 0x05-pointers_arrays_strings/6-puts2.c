#include "holberton.h"

/**
 * puts2 - prints every other char of a string, starting with the first char
 * @str: pointer to print
 *
 * Return: no return.
 */

void puts2(char *str)
{
int x = 0;

while (*str != '\0' && x <= 9)
{
if ((str[x] % 2) == 0)
{
_putchar(str[x]);
}
x++;
}
_putchar('\n');
}

