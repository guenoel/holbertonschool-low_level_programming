#include "hash_tables.h"

/**
 * hash_table_get - function to read a value
 * @ht: pointer to hash table
 * @key: key
 *
 * Return: value (string)
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *node;

	if (ht == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key))
			node = node->next;
		else
			return (node->value);
	}
	return (NULL);
}
