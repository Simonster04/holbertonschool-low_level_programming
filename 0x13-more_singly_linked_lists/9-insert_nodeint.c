#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert a node at a given position
 * @head: the head of the given list
 * @idx: the given position
 * @n: an integer
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp,*newnode;
	unsigned int i = 0;

	tmp = *head;
	newnode = malloc(sizeof(listint_t));
	if (!newnode)
	{
		return (NULL);
	}
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		while (i < idx && tmp)
		{
			tmp = tmp->next;
			i++;
		}
		if (i < idx)
		{
			return (NULL);
		}
		newnode->next = tmp->next;
		tmp->next = newnode;
	}

	return (newnode);
}
