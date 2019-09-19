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

char alphabet, ALPHABET;
alphabet = 'a';
ALPHABET = 'A';

while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}

while (ALPHABET <= 'Z')
{
putchar(ALPHABET);
ALPHABET++;
}

putchar('\n');

return (0);
}
