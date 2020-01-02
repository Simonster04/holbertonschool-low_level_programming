#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of doblinklist
 * @head: head to double linked list given
 * @n: value of node
 * Return: address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (!(*head))
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		tmp = *head;
		while (tmp->next)
		{
			tmp = tmp->next;
		}

		new_node->prev = tmp;
		tmp->next = new_node;
	}
	return (new_node);
}
