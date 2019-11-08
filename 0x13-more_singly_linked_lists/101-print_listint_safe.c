#include "lists.h"
<<<<<<< HEAD
#include <stdlib.h>
=======
#include <stdio.h>
#include <string.h>
>>>>>>> 7327ddf46cccc083e22a6e399104d2be5413a3e3

/**
 * print_listint_safe - prints a linked list
 * @head: head of the given list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
<<<<<<< HEAD
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

=======
	lisint_t tmp;

	tmp = head;

	tmp++;

	return (0);
>>>>>>> 7327ddf46cccc083e22a6e399104d2be5413a3e3
}
