#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: pointer to hash table
 *
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	hash_node_t *tmp;

	if (ht == NULL)
		exit(EXIT_FAILURE);

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node)
		{
			free(node->key);
			free(node->value);
			while (node->next)
			{
				tmp = node;
				node = node->next;
				free(tmp);
				free(node->key);
				free(node->value);
			}
		}
	}
	free(ht->array);
	free(ht);
}
