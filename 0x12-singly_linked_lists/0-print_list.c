#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: The head of the list to be printed
 *
 * Return: Amount of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t cont = 0;

	while (h)
	{
		if (!(h->str))
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		cont++;
	}
	return (cont);
}
