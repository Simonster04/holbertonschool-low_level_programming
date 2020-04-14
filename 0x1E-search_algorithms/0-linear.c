#include "search_algos.h"

/**
 * linear_search - Looks for a value w/ linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x;
	int y = 0;

	if (array && size > 0)
	{
		for (x = 0; x < size; x++)
		{
			if (array[y] == value)
			{
			printf("Value checked array[%i] = [%i]\n", y, array[y]);
			return (y);
			}
			printf("Value checked array[%i] = [%i]\n", y, array[y]);
			y++;
		}
	}
	return (-1);
}
