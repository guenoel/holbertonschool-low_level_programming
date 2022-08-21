#include "hash_tables.h"

/**
 * hash_table_print - print all in a hash table
 * @ht: pointer to hash table
 *
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	long unsigned int i;
	int j;

	printf("{");
	for (i = 0, j = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (j != 0)
				printf(", ");
			printf("\'%s\': \'%s\'", (ht->array[i])->key, (ht->array[i])->value);
			j++;
		}
	}

	printf("}\n");
}
