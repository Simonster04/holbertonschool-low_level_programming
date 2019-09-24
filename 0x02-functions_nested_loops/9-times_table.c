#include "holberton.h"

/**
 * print_last_digit -  prints the last digit of a number
 * @c: The character to print
 *
 * Return: On success c.
 * On error, 0 is returned.
 */

void times_table(void)
{

int a, b, c, d, e, f, g, h, i, j;

for (b = '0'; b <= '9'; b++)
{
        for (c = '0'; c <= '9'; c++)
        {
                for (d = '0'; d <= '9'; d++)
                {
                        for (e = '0'; e <= '9'; e++)
                        {
                                for (f = '0'; f <= '9'; f++)
                                {
                                        for (g = '0'; g <= '9'; g++)
                                        {
                                                for (h = '0'; h <= '9'; h++)
                                                {
                                                        for (i = '0'; i <= '9'; i++)
                                                        {
                                                                for (j = '0'; j <= '9'; j++)
                                                                {
								a = 0;
								b += 1;
								c += 2;
								d += 3;
								e += 4;
								f += 5;
								g += 6;
								h += 7;
								i += 8;
								j += 9;

								_putchar('0' + a);
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + b);
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + c);
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + d);
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + e);
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + f);
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + g);
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + h);
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + i);
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + j);
_putchar('\n');
                                                                }
                                                        }
                                                }
                                        }
                                }
                        }
                }
        }
}

}
