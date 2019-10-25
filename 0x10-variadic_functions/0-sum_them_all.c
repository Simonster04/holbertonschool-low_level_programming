#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{

	unsigned int cont;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_list valist;

	va_start (valist, n);

	for (cont = 0; cont < n; cont++)
	{
		sum = sum + va_arg(valist, int);
	}

	va_end (valist);

	return (sum);
}
