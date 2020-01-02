#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints out number of bytes of main function
 * @argc: int of arguements
 * @argv: list of arguements
 * Return: 0
 */

int main(int argc, char *argv[])
{

	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(2);
	}

	bytes = atoi(argv[1]);

}
