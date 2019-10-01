#include "holberton.h"

/**
 * rev_string - prints a string, in reverse, followed by a new line
 * @s: char pointer
 *
 * Return: No return.
 */

void rev_string(char *s)
{

int x, y;
int j = 8;

for (x = 0; x <= j; x++)
{

y = s[x];
s[x] = s[j];
s[j] = y;

j--;

}

}
