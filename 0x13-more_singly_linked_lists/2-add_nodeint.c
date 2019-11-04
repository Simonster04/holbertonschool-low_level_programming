#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 *
 * Return: Always 0.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if(!newnode)
	{
		return(NULL);
	}

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return(newnode);
}
