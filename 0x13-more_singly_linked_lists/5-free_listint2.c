#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list, setting head to NULL
 * @head: head of the given list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp, *head_cp;

	head_cp = *head;
	while (head_cp)
	{
		tmp = head_cp;
		head_cp = head_cp->next;
		free(tmp);
	}
	*head = NULL;
}
