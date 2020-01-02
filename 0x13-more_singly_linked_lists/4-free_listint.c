#include <stdlib.h>
#include "lists.h"

/**
 * free_listint -  frees a listint_t list.
 * @head: header of the given list
 * Return: void.
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
