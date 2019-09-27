#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{

long int n = 612852475143;
long int div = 2;
long int max;
long int a = 0;

while (n != 0))
{
	if ((n % div) != 0)
	{
	div = div + 1;
	}
	else
	{
	max = n;
	n = n / div;
		if (n == 1)
		{
		printf("Largest factor: %ld\n", max);
		a = 1;
		break;
		}
	}
}
return (0);
}
