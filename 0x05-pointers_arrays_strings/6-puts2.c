#include "holberton.h"

/**
 * puts2 - prints every other char of a string, starting with the first char
 * @str: pointer to print
 *
 * Return: no return.
 */

void puts2(char *str)
{
int x;
int y = 0;
int n;

while (str[y] != '\0')
{
y += 1;
}


for(x = 0; x < y; x+=2)
{

n = str[x];
str[x/2] = n;
_putchar(*str);

}

_putchar('\n');
}

