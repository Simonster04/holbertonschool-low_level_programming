#include "holberton.h"

/**
 * rev_string - prints a string, in reverse, followed by a new line
 * @s: char pointer
 *
 * Return: No return.
 */

void rev_string(char *s)
{

int x, y, f;
int j = 0;

while (s[j] != '\0')
{
j += 1;
}


for (x = 0; x < (j - 1); x++)
{
f++;

}

for (x = 0; x < (j / 2); x++)
{

y = s[x];
s[x] = s[f];
s[f] = y;

f--;

}

}
