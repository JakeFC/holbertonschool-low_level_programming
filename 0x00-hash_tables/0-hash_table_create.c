#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the new hash table, or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    unsigned long int i;
    hash_table_t *ht;
    hash_node_t **array;

    ht = malloc(sizeof(hash_table_t));
    if (!ht)
    {
        return (NULL);
    }
    array = malloc(sizeof(void *) * size);
    if (!array)
    {
        return (NULL);
    }
    ht->size = size;
    for (i = 0; i < size; i++)
    {
        array[i] = NULL;
    }
    ht->array = array;
    return (ht);
}