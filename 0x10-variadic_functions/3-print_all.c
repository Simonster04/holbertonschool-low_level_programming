#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: format to print
 *
 * Return: void.
 */

void print_all(const char * const format, ...)
{
	int i = 0, cont = 0;
	va_list valist;

	va_start(valist, format);
	while (format[cont] != '\0')
	{
		cont++;
	}
	while (i < cont)
	{
		if (format[i] != '\0')
			switch (format[i])
			{
			case 'c':
			printf("%c", (char)va_arg(valist, int));
			break;
			case 'i':
			printf("%d", va_arg(valist, int));
			break;
			case 'f':
			printf("%f", (float)va_arg(valist, double));
			break;
			case 's':
			printf("%s", va_arg(valist, char *));
			break;
			default:
			break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
		|| format[i] == 's') && i != (cont - 1))
		{
			printf(", ");
		}
	i++;
	}
	va_end(valist);
	printf("\n");
}
