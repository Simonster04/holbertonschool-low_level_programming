#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a list.
 * @h: head of a list
 * Return: amount of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t cont = 0;

	while (h)
	{
		printf("%d\n", h->n);
		cont += 1;
		h = h->next;
	}

	return (cont);
}
