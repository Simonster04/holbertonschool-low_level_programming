#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key or string
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_hs;
	unsigned long int idx;

	if (!ht || !key || !value)
	{
		return (0);
	}

	idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx] && strcmp(ht->array[idx]->key, key) == 0)
	{
		ht->array[idx]->value = strdup(value);
		return (1);
	}

	new_hs = malloc(sizeof(hash_node_t));
	if (new_hs == NULL)
	{
		return (0);
	}
	new_hs->key = strdup(key);
	new_hs->value = strdup(value);
	new_hs->next = ht->array[idx];
	ht->array[idx] = new_hs;
	return (1);
}
