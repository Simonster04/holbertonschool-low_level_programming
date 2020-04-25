#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int x = 1, y = 2, z, w;
	unsigned long int x1, x2, y1, y2, z1, z2, it;

	z = x + y;
	printf("%lu, ", x);
	printf("%lu, ", y);
	for (w = 3; w < 92; w++)
	{
		printf("%lu, ", z);
		x = y;
		y = z;
		z = x + y;
	}
	y1 = y / 1000000000;
	y2 = y % 1000000000;
	z1 = z / 1000000000;
	z2 = z % 1000000000;
	for (it = 92; it < 98; it++)
	{
		printf("%lu%lu, ", z1, z2);
		x1 = y1;
		x2 = y2;
		y1 = z1;
		y2 = z2;
		z1 = x1 + y1 + ((x2 + y2) / 1000000000);
		z2 = (x2 + y2) % 1000000000;
	}
	printf("%lu%lu\n", z1, z2);
	return (0);
}
