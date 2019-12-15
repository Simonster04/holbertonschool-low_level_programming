#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given index
 * @head: head of a given list
 * @index: position to delete
 *
 * Return: 1 on success, -1 on failure.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
	}
	else
	{
		while (tmp && i < index)
		{
			tmp = tmp->next;
			i++;
		}

		if (i != index)
		{
			return (-1);
		}
		tmp->prev->next = tmp->next;
		if (tmp->next)
		{
			tmp->next->prev = tmp->prev;
		}
		free(tmp);
	}

	return (1);
}
