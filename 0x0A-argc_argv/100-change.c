#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{

int cents = 0;
int rest = 0;
int cent25, cent10, cent5, cent2, cent1;

if (argc == 2)
{
	if (atoi(argv[1]) / 1 < 0)
	{
	printf("%d\n", 0);
	return (0);
	}
	cent25 = atoi(argv[1]) / 25;
rest = atoi(argv[1]) % 25;
cents = cents + cent25;
	cent10 = rest / 10;
rest = rest % 10;
cents = cents + cent10;
	cent5 = rest / 5;
rest = rest % 5;
cents = cents + cent5;
	cent2 = rest / 2;
rest = rest % 2;
cents = cents + cent2;
	cent1 = rest / 1;
rest = rest % 1;
cents = cents + cent1;

printf("%d\n", cents);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
