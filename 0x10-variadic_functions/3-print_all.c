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
	int i = 0;
	va_list valist;
	char *str = NULL;

	va_start(valist, format);
	while (format[i] != '\0')
	{
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
			str = va_arg(valist, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
			printf("%s", str);
			break;
			default:
			break;
			}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
		|| format[i] == 's') && format[i + 1] != '\0')
		{
			printf(", ");
		}
	i++;
	}
	va_end(valist);
	printf("\n");
}
