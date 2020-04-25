#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48, j = 48, h = 48, w = 49;

	while (i < 58)
	{
		putchar(i), putchar(j), putchar(' '), putchar(h), putchar(w);
		if (i == 57 && j == 56 && h == 57 && w == 57)
		{
			putchar('\n'), i++;
		}
		else
		{
			putchar(','), putchar(' ');
			if (h == 57 && w == 57)
			{
				if (j < 56)
				{
					w = ++j + 1, h = i;
				}
				else if (j == 56)
				{
					j++, h = i + 1,	w = 48;
				}
				else if (j == 57)
				{
					j = 48, w = 49, h = ++i;
				}
			}
			else if (w < 57)
			{
				w++;
			}
			else
			{
				w = 48,	h++;
			}
		}
	}
	return (0);
}
