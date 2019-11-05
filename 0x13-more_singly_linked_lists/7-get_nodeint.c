#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - calculate the nth node of a linked list
 * @head: head of a given list
 * @index: position of a list
 * Return: index node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i = 0;

	tmp = head;
	if (index == 0)
	{
		return(tmp);
	}

	while (head && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	if (i < index)
	{
		return (NULL);
	}

	return (tmp);
}
