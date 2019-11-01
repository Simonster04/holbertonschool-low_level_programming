#include <stdio.h>
#include "lists.h"

/**
 * list_len - calculates the number of elements in a linked list_t list.
 * @h: linked list
 * Return: number of elements.
 */

size_t list_len(const list_t *h)
{
	size_t elem = 0;

	if (h)
	{
		for (elem = 0; h; elem++)
		{
			h = h->next;
		}
		elem++;
	}

	return (elem);
}
