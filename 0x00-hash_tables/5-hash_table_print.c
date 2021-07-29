#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	char *sep = "";
	hash_node_t *node;

	if (!ht)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node)
		{
			while (node)
			{
				printf("%s'%s': '%s'", sep, node->key, node->value);
				sep = ", ";
				node = node->next;
			}
		}
	}
	puts("}");
}
