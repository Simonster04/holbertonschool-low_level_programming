#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	long int x = 1, y = 2, z = 3, w, s = 2;

	for (w = 2; w < 34; w++)
	{
		if (z % 2 == 0)
		{
			s += z;
		}
		x = y;
		y = z;
		z = x + y;
	}
	printf("%ld\n", s);
	return (0);
}
