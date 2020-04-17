#include "search_algos.h"

/**
 * binary_helper - Looks for a value w/ binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t low, high;
	size_t jump = sqrt(size), x;

	if (!array)
	{
		return (-1);
	}
	low = 0;
	high = low + jump;
	printf("Value checked array[%lu] = [%i]\n", low, array[low]);
	while (high < size && array[low] < value)
	{
		if (array[high] >= value)
		{
			break;
		}
		low += jump;
		high += jump;
		printf("Value checked array[%lu] = [%i]\n", low, array[low]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	for (x = low; x <= (size - 1); x++)
	{
		printf("Value checked array[%lu] = [%i]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
	}
	return (-1);
}
