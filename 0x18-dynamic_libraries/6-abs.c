#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, 0 is returned, and errno is set appropriately.
 */

int _abs(int c)
{

if (c < 0)
{
c *= -1;
}

return (c);

}
