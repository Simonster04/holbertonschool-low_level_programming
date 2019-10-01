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
int j = 0;


while (s[j] != '\0')
{
j += 1;
}

for (x = 0; x <= (j - 1); x++)
{

y = s[x];
s[x] = s[j];
s[j] = y;

j--;

}

}
