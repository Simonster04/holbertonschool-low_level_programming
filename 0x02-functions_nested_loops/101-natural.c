#include <stdio.h>

/**
 * main -  prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: 0
 */

int main(void)
{
	int sum = 0, i;

	for (i = 1023; i >= 0; i--)
	{
		if ((i % 3) == 0)
		{
			sum += i;
		}
		else if ((i % 5) == 0)
		{
			if (!((i % 3) == 0))
			{
				sum += i;
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
