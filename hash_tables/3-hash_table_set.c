#include "hash_tables.h"
/**
 * create_node - create a new node initialised
 * @key: key
 * @value: value
 *
 * Return: pointer to new node
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	return (new_node);
}

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

	if (ht == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];

	if (node == NULL)
	{
		ht->array[index] = create_node(key, value);
		if (ht->array[index] == NULL)
			return (0);
	}
	else
	{
		while (node != NULL)
		{
			if (strcmp(node->key, key))
				node = node->next;
			else
			{
				node->value = strdup(value);
				return (1);
			}
		}
		new_node = create_node(key, value);
		if (ht->array[index] == NULL)
			return (0);
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}
