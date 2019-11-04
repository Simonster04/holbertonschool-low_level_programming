#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: head of the list
 * @n: int data to copy in the new element
 * Return: The address of new element or NULL if fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *tmp;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (!(*head))
	{
		*head = newnode;
	}
	else
	{
		tmp = *head;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = newnode;
	}

	return (newnode);
}
