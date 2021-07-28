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
	unsigned long int res;
	
	res = hash_djb2(key) % size;
	return (res);
}
