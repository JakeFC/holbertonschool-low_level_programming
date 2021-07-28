#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to hash table
 * @key: non-empty key string
 * @value: value associated with the key
 * Return: 1 for success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;

	if (!key[0])
	{
		return (0);
	}
	node = malloc(sizeof(hash_node_t));
	if (!node)
	{
		return (0);
	}
	node->key = (char *)malloc(strlen(key));
	strcpy(node->key, key);
	node->value = (char *)malloc(strlen(value));
	strcpy(node->value, value);
	node->next = NULL;
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] != NULL)
	{
		node->next = ht->array[index];
	}
	ht->array[index] = node;
	return (1);
}
