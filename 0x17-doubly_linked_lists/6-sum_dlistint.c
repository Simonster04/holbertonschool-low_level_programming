#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a dlinked list
 * @head: head of the given list
 *
 * Return: sum of all the n data in the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp;

	if (!head)
	{
		return (0);
	}

	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
