#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int cont;
	va_list valist;
	char *temp;

	va_start(valist, n);
	for (cont = 0; cont < n; cont++)
	{
		temp = va_arg(valist, char*);

		if (temp == NULL)
		{
			temp = "(nil)";
		}
		printf("%s", temp);
		if (cont == (n - 1))
		{
			printf("\n");
		}
		else if (separator != NULL)
		{
			printf("%s", separator);
		}
		else
		{
			continue;
		}
	}
	va_end(valist);
}
