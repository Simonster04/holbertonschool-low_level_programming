#include "lists.h"

/**
 * get_dnodeint_at_index - calculate the nth node of a linked list
 * @head: head of a given list
 * @index: position of a list
 * Return: index node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	if (head)
	{
		tmp = head;
		while (tmp && i < index)
		{
			tmp = tmp->next;
			i++;
		}
		if (i != index)
		{
			return (NULL);
		}

		return (tmp);
	}

	return (NULL);
}
