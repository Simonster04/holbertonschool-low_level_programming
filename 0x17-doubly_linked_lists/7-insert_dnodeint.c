#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at a given position
 * @h: the head of the given list
 * @idx: the given position
 * @n: an integer
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *newnode;
	unsigned int i = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
	{
		return (NULL);
	}
	newnode->n = n;
	if (*h == NULL)
	{
		if (idx > 0)
		{
			free(newnode);
			return (NULL);
		}
		newnode->prev = NULL;
		newnode->next = NULL;
		*h = newnode;
		return (newnode);
	}
	if (idx == 0)
	{
		newnode->next = *h;
		newnode->prev = NULL;
		(*h)->prev = newnode;
		*h = newnode;
	}
	else
	{
		while (i < (idx - 1) && tmp)
		{
			tmp = tmp->next;
			i++;
		}
		if (i != (idx - 1))
			return (NULL);
		if (!(tmp->next))
			newnode->next = NULL;
		newnode->next = tmp->next;
		newnode->prev = tmp;
		(tmp->next)->prev = newnode;
		tmp->next = newnode;
	}
	return (newnode);
}
