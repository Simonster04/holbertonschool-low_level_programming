#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - test operational functions
 * @argv: array of arguments
 * @argc: size of array of arguments
 *
 * Return: result of the operation
 */

int main(int argc, char **argv)
{
	int a, b, result;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
		&& argv[2][0] != '/' && argv[2][0] != '%') || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	f = get_op_func(argv[2]);
	result = (*f)(a, b);
	printf("%d\n", result);

	return (0);

}
