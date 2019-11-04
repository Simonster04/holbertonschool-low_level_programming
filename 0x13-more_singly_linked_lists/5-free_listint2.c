#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list, setting head to NULL
 * @head: head of the given list
 */

void free_listint2(listint_t **head)
{
	listint *tmp;

	while (*head)
	{
		tmp = *head;
		head = (*head)->next;
		free(tmp);
	}

}
