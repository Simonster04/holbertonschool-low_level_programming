#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - prints all the elements of a dlistint_t list
 * @h: double linked list given
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t cont = 0;

	while (h)
	{
		cont++;
		h = h->next;
	}

	return (cont);
}
