#include "holberton.h"
#include <string.h>

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
char i[32];

while (str[y] != '\0')
{
y += 1;
}


for(x = 0; x < y; x+=2)
{

i[x/2]=str[x];
_putchar(i[x/2]);
}

_putchar('\n');
}

