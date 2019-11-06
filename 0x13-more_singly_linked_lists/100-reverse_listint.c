#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: head to the given list
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *next;


	if ((*head)->next == NULL)
	{
		return (*head);
	}

	previous = NULL;
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;

	return (*head);
}
