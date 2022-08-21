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
	hash_node_t *tmp;

	if (ht == NULL)
		exit(EXIT_FAILURE);

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			free((ht->array[i])->key);
			(ht->array[i])->key = NULL;
			free((ht->array[i])->value);
			(ht->array[i])->value = NULL;
			while (ht->array[i])
			{
				tmp = (ht->array[i])->next;
				free((ht->array[i])->key);
				(ht->array[i])->key = NULL;
				free((ht->array[i])->value);
				(ht->array[i])->value = NULL;
				free(ht->array[i]);
				ht->array[i] = tmp;
			}
		}
	}
	free(ht->array);
	ht->array = NULL;
	free(ht);
	ht = NULL;
}
