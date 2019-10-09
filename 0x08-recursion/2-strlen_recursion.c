#include "holberton.h"

/**
 * _strlen_recursion - prints a string, followed by a new line.
 * @s: string
 * Return: lenght c.
 */

int _strlen_recursion(char *s)
{

static int c;

if (*s != '\0')
{

c = c + 1;
_strlen_recursion(s + 1);

}

return (c);

}
