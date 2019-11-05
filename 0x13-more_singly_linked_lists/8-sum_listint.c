#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_listint - sum of all the data (n) of a linked list
 * @head: head of the given list
 *
 * Return: sum of all the n data in the list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp;

	tmp = head;
	if (!head)
	{
		return (0);
	}

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
