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
for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= '9'; j++)
{
for (h = '0'; h <= '9'; h++)
{
if (i == j)
{}
else if (j == h)
{}
else if (i == h)
{}
else if (i > j)
{}
else if (j > h)
{}
else if (i > h)
{}
else
{
putchar(i);
putchar(j);
putchar(h);
if (i == '7' && j == '8' && h == '9')
{}
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
