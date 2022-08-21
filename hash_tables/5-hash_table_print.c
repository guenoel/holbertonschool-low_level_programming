#include "hash_tables.h"

/**
 * hash_table_print - print all in a hash table
 * @ht: pointer to hash table
 *
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int j;
	hash_node_t *node;

	if (ht == NULL)
		exit(EXIT_FAILURE);

	printf("{");
	for (i = 0, j = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node)
		{
			if (j != 0)
				printf(", ");
			printf("\'%s\': \'%s\'", node->key, node->value);
			while (node->next)
			{
				node = node->next;
				printf(", \'%s\': \'%s\'", node->key, node->value);
			}
			j++;
		}
	}

	printf("}\n");
}
