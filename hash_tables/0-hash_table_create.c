#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	hash_table_t *main_table = malloc(sizeof(hash_table_t) * size);
	main_table->size = size;
	main_table->array = &node;

	return (main_table);
}
