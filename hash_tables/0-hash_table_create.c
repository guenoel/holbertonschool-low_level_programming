#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t *node;

	hash_table_t *main_table = malloc(sizeof(main_table) * size);
	main_table->size = size;
	main_table->array = &node;

	return (main_table);
}
