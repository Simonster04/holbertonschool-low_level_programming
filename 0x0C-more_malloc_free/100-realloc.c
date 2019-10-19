#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using
 * @old_size: initial size
 * @new_size: needed size
 * @ptr: pointer
 *
 * Return: pointer to the allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	char *my_realloc = NULL;
	unsigned int i;

	if (new_size > old_size || new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr != '\0')
	{
		free(ptr);
		return (NULL);
	}

	my_realloc = malloc(new_size);

	if (ptr == NULL)
	{
		return (my_realloc);
	}

	if (my_realloc == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < new_size; i++)
	{
	my_realloc[i] = ((char *)ptr)[i];
	}

	free(ptr);

	return (my_realloc);
}
