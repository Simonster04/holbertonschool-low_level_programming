#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{

if (argc == 3)
{

int y = atoi(argv[2]);
int x = atoi(argv[1]);
int multi = x * y;
	printf("%d\n", multi);
	return (0);
}

else

{
	printf("Error\n");
	return (1);
}
}
