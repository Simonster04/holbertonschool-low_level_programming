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

int numbers;
numbers = 0;

for (numbers = '0'; numbers <= '9'; numbers++)
{
putchar(numbers);
}

putchar('\n');

return (0);
}

