#include "lists.h"

size_t listint_len(const listint_t *h)
{
	size_t cont;

	while (h)
	{
		cont++;
		h = h->next;
	}
	return (cont);
}
