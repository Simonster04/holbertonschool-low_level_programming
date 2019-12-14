#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning
 * @head: head to double linked list given
 * @n: value of node
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;

	if (!(new_node->next))
	{
		(new_node->next)->prev = new_node;
	}

	return (new_node);
}
