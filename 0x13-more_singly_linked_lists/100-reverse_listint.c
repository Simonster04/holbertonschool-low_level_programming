#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: head of a given list
 *
 * Return: a pointer to the first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *next;

	previous = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;
	return(*head);
}
