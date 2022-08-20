#include "hash_tables.h"

/**
 * hash_table_set - function that add an element in hash table
 * @ht: pointer to the hash table
 * @key: key
 * @value: value
 *
 * Return: 1 if succeed 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	int index;

	index = key_index((unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		new_node->next = (ht->array[index]);
		(ht->array[index]) = new_node;
	}

	return (1);
}
