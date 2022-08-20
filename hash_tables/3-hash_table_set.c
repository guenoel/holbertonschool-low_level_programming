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
	hash_node_t *node;
	hash_node_t *new_node;	
	int index;

	index = key_index((unsigned char *)key, ht->size);
	node =  ht->array[index];

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = (char *)key;
	new_node->value = (char *)value;
	new_node->next = NULL;

	if (node == NULL)
		node = new_node;
	else
	{
		while (node != NULL)
			node = node->next;
		node->next = new_node;
	}
	return (1);
}
