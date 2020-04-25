#include "holberton.h"
#include <stdio.h>

/**
 * print_times_table -  prints the last digit of a number
 * @n: int
 * Return: void
 */

void print_times_table(int n)
{
	int j, i;

	if (n >= 0 && n <= 15)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == 0)
				{
					putchar('0');
				}
				else if ((i * j) < 10)
				{
					putchar(' '), putchar(' ');
					putchar((i * j) + '0');
				}
				else if ((i * j) < 100)
				{
					putchar(' ');
					putchar(((i * j) / 10) + '0');
					putchar(((i * j) % 10) + '0');
				}
				else
				{
				putchar(((i * j) / 100) + '0');
				putchar((((i * j) % 100) / 10) + '0');
				putchar(((i * j) % 10) + '0');
				}
				if (j < n)
				{
					putchar(','), putchar(' ');
				}
				else
				{
					putchar('\n');
				}
			}
		}
	}
}
