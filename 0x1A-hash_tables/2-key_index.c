#include "hash_tables.h"

/**
 * key_index - array of hash table where key is stored.
 * @size: how large hash table array is.
 * @key: getting the index using the key.
 *
 * Description: include the djb2 algorithm.
 * Return: is the key index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
