#include "holberton.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: int
 * @y: int
 * Return: x power to y.
 */

int _pow_recursion(int x, int y)
{

if (y < 0)
{

return (-1);

}

if (y == 0)
{

return (1);

}

if (x == 0)
{
return (0);
}


return (x * _pow_recursion(x, y - 1));


}