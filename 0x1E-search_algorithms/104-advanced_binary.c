#include "search_algos.h"

/**
 * binary_helper - Looks for a value w/ binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @first: first position of array
 * @last: last position of array
 * @val: value to search for
 * Return: the first index where value is located
 */

int binary_helper(int *array, size_t first, size_t last, int val)
{
	size_t mid = (first + last) / 2, x;

	if (first > last)
	{
		return (-1);
	}
	printf("Searching in array:");
	for (x = first; x < last; x++)
	{
		printf(" %i,", array[x]);
	}
	printf(" %i\n", array[x]);
	if (array[mid] == val)
	{
		if (array[mid - 1] == val)
		{
			return (binary_helper(array, first, mid, val));
		}
		return (mid);
	}
	if (array[mid] > val)
	{
		return (binary_helper(array, first, mid - 1, val));
	}
	if (array[mid] < val)
	{
		return (binary_helper(array, mid + 1, last, val));
	}
	return (-1);
}

/**
 * advanced_binary - Looks for a value w/ binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located
 */

int advanced_binary(int *array, size_t size, int value)
{
	int index;

	if (array == NULL)
	{
		return (-1);
	}
	index = binary_helper(array, 0, size - 1, value);
	return (index);
}
