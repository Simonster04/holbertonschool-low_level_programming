#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at a given index
 * @head: head of a given list
 * @index: position to delete
 *
 * Return: 1 on success, -1 on failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *index_node, *tmp = *head;
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
		while (tmp && i < index - 1)
		{
			tmp = tmp->next;
			i++;
		}

		if (i != (index - 1))
		{
			return (-1);
		}

	index_node = tmp->next;
	tmp->next = index_node->next;
	free(index_node);
	}
	return (1);
}
