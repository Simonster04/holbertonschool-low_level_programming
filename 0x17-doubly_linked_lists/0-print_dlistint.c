#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h - double linked list given
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t cont = 0;

	while (h)
	{
		printf("%d\n", h->n);
		cont++;
		h = h->next;
	}

	return (cont);
}
