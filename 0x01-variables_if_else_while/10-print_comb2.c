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


for (i = '0'; i <= '9'; i++)
{

for (j = '0'; j <= '9'; j++)
{
putchar(i);
putchar(j);

if (i == '9' && j == '9')
{
}
else
{
putchar(',');
putchar(' ');
}

}
}

putchar('\n');

return (0);
}
