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

char alphabet;
alphabet = 'a';

while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}

putchar('\n');

return (0);
}

