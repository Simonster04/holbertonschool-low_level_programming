#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *aux;
	unsigned long int i = 0;
	int num = 0;

	printf("{");
	if (!ht || !(ht->array))
	{
		printf("}\n");
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		aux = ht->array[i];
		while (aux)
		{
			if (num == 1)
			{
				printf(", ");
			}
			num = 1;
			printf("'%s': '%s'", aux->key, aux->value);
			aux = aux->next;
		}
	}
	printf("}\n");
}
