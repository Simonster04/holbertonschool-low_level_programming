#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: amount of arguments.
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	va_list valist;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));

		if (i == (n - 1))
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
