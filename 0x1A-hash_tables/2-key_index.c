#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: the key or string
 * @size: size of the array of the hash table
 * Return: index with location in memory of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value, index;

	hash_value = hash_djb2(key);
	index = hash_value % size;
	return (index);
}
