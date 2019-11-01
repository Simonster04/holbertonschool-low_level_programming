#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: The head of the list to be printed
 *
 * Return: Amount of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t cont = 0;
	list_t tmp;

	tmp = h;
	while (tmp)
	{
		if (!tmp->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", tmp->len, tmp->str);
		}
		cont++;
		tmp = tmp->next;
	}
	return (cont);
}
