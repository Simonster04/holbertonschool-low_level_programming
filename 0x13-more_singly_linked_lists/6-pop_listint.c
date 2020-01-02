#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head of a given linked list
 * Return: returns the head nodes data.
 */

int pop_listint(listint_t **head)
{
	int n_data;
	listint_t *tmp;

	if (!(*head))
	{
		return (0);
	}

	tmp = *head;
	n_data = (*head)->n;
	*head = (*head)->next;
	free(tmp);

	return (n_data);
}
