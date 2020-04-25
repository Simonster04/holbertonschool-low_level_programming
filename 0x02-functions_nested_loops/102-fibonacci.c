#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	long int x = 1, y = 2, z = 3, w;

	printf("%ld, ", x);
	printf("%ld, ", y);
	for (w = 3; w < 50; w++)
	{
		printf("%ld, ", z);
		x = y;
		y = z;
		z = x + y;
	}
	printf("%ld\n", z);
	return (0);
}
