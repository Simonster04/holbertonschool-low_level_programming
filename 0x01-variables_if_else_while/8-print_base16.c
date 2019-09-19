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
base10 = 0;
base16 = 'A';

for (base10 = '0'; base10 <= '9'; base10++)
{
putchar(base10);
}


while (base16 <= 'F')
{
putchar(base16);
base16++;
}

putchar('\n');

return (0);
}
