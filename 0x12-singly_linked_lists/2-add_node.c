#include "lists.h"
#include <string.h>
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

	while (s[c])
	{
		c++;
	}

	return (c);
}

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: head of the list
 * @str: a string to be copied
 * Return: address of new element.
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *new_node;

	if (str == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (!(new_node->str))
	{
		free(new_node);
	}
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
