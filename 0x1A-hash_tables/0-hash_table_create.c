#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: a hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hs;
	unsigned int i;

	new_hs = malloc(sizeof(hash_table_t));
	if (!new_hs)
	{
		return (NULL);
	}
	new_hs->size = size;

	new_hs->array = malloc(sizeof(hash_node_t) * size);
	if (!(new_hs->array))
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		new_hs->array[i] = NULL;
	}

	return (new_hs);
}
