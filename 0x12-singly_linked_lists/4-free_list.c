#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: head of the list
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t *next_thing;

	while (head)
	{
		next_thing = head;
		head = head->next;
		free(next_thing->str);
		free(next_thing);
	}
}
