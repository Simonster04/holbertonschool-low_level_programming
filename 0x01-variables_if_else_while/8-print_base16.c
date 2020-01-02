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

char base16;
int base10;


for (base10 = '0'; base10 <= '9'; base10++)
{
putchar(base10);
}

base16 = 'a';

while (base16 <= 'f')
{
putchar(base16);
base16++;
}

putchar('\n');

return (0);
}
