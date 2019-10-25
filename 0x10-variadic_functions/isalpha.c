#include "variadic_functions.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, 0 is returned.
 */

int _isalpha(int c)
{

if (c >= 65 && c <= 90)
{
return (1);
}
else if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
