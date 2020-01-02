#include "lists.h"

/**
 * listint_len - number of elements in a linked list
 * @h: header of the given list
 * Return: amount of elements.
 */

size_t listint_len(const listint_t *h)
{
	size_t cont = 0;

	while (h)
	{
		cont++;
		h = h->next;
	}
	return (cont);
}
