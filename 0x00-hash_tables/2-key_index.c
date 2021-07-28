#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: string which identifies the key
 * @size: size of the array of the hash table
 * Return: the index at which the key/value pair should be store in the
 * array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
