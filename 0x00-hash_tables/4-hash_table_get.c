#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to the hash table
 * @key: key string
 * Return: the value string associated with the key, or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	index = key_index((unsigned char *)key, ht->size);
	node = find_key((hash_table_t *)ht, index, (char *)key);
	if (node == NULL)
	{
		return (NULL);
	}
	return (node->value);
}
