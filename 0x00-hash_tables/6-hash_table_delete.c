#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *previous;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			previous = node;
			node = node->next;
			free(previous->key);
			free(previous->value);
			free(previous);
		}
	}
	free(ht->array);
	free(ht);
}
