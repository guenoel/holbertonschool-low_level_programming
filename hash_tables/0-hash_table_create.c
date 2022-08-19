#include "hash_tables.h"

/**
 * hash_table_create - functon to create hash table
 * @size: size of the array
 *
 * Return: pointer to the table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *main_table = malloc(sizeof(hash_table_t));

	if (!(main_table))
		return (NULL);
	main_table->size = size;
	main_table->array = calloc(main_table->size, sizeof(hash_node_t *));
	return (main_table);
}
