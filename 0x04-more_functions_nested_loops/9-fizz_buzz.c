#include <stdio.h>

/**
 * main - writes the character c to stdout
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{

int x;

for (x = 1; x <= 100; x++)
{
	if ((x % 3) == 0 && (x % 5) == 0)
	{
	printf("FizzBuzz ");
	}
	else if ((x % 3) == 0)
	{
	printf("Fizz ");
	}
	else if ((x % 5) == 0)
	{
		if (x != 100)
		{
		printf("Buzz ");
		}
		else
		{
		printf("Buzz");
		}
	}
	else
	{
	printf("%d ", x);
	}

}
printf("\n");
return (0);
}


