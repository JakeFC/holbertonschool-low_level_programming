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
	hash_node_t *node, *same_key;
	unsigned long int index;

	if (!ht || !key[0])
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
	same_key = find_key(ht, index, node->key);
	if (same_key)
	{
		free(same_key->value);
		same_key->value = node->value;
		free(node->key);
		free(node);
		return (1);
	}
	if (ht->array[index] != NULL)
	{
		node->next = ht->array[index];
	}
	ht->array[index] = node;
	return (1);
}

/**
 * find_key - finds the hash_node_t node with matching key if it exists
 * @ht: pointer to the hash table
 * @index: index to search
 * @key: key string to match
 * Return: pointer to the node, or NULL
 */
hash_node_t *find_key(hash_table_t *ht, unsigned long int index, char *key)
{
	hash_node_t *node;

	node = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node);
		}
		node = node->next;
	}
	return (NULL);
}