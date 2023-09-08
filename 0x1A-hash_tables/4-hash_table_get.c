#include "hash_tables.h"

/**
 * hash_table_get - value related to certain key.
 *
 * @key: The secret to understanding value.
 * @ht: indication of the hash table.
 * Return: NULL is used If not value linked to key in ht.  .
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
