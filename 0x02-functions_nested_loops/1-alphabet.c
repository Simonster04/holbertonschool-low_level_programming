#include "holberton.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 *
 *
 * Return: No return.
 *
 */

void print_alphabet(void)

{

char c;
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}

	_putchar('\n');
return;

}
