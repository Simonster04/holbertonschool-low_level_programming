#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 *
 * Return: the pointer
 */

int **alloc_grid(int width, int height)
{

int **x;
int i;
int j;

x = (int **)malloc(height * sizeof(int*));

for (i = 0; i < height; i++)
{
	x[i] = (int*)malloc(columnas*sizeof(int));
}

	for (i=0; i<filas; i++) 
	{ 
		printf("\n"); 
		for (j=0; j<columnas; j++) 
			printf("\t%d", x[i][j] ); 
	} 
	
	return 0; 
} 
