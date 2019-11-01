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
	/*list_t *next_thing;
*/
	while (head)
	{
	free(head->str);
	free(head);
	head = head->next;
	}
}
