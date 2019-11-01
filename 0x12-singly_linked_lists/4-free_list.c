#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a list_t list.
 *
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t *next_thing;

	while (head)
	{
		next_thing = head;
		head = head->next;
		free(new_thing->str);
		free(new_thing);
	}
}
