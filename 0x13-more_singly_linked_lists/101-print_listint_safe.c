#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - prints a linked list
 * @head: head of the given list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t cont = 0;

	while (head)
	{
		printf("[%p] %d\n", (void *)&(head->n), head->n);
		cont += 1;
		head = head->next;
		if (!(head->next))
		{
			break;
		}
	}
	return (cont);

}
