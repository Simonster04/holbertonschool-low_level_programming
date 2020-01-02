#include <stdio.h>
#include <ctype.h>
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

int add = 0;
int i, j;

if (argc == 1)
{
printf("%d\n", 0);
}
else
{
for (i = 1; i < argc; i++)
{
	for (j = 0; argv[i][j] != '\0'; j++)
	{
		if (!isdigit(argv[i][j]))
		{
		printf("Error\n");
		return (1);
		}
	}
	add += atoi(argv[i]);
}
printf("%d\n", add);
}
return (0);

}
