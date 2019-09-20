#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* more headers goes there */
/* betty style doc for function main goes there */

int main(void)
{
int i;
int j;
int h;
int w;
for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= '9'; j++)
{
for (h = '0'; h <= '9'; h++)
{
for (w = '0'; w <= '9'; w++)
{
putchar(i);
putchar(j);
putchar(' ');
putchar(h);
putchar(w);
if ((i + j) > (h + w))
{}
else if (i == '9' && j == '8' && h == '9' && w == '9')
{
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
