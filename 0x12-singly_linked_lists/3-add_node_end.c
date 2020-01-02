#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: char pointer
 *
 * Return: 0.
 */

int _strlen(const char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head of the list
 * @str: a string to be added
 * Return: address of new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new_node, *tmp;

	if (!str)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (!(*head))
	{
		*head = new_node;
	}
	else
	{
		tmp = *head;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;
	}

	return (new_node);
}
