#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *main_table = malloc(sizeof(hash_table_t));
	main_table->size = size;
	main_table->array = calloc(main_table->size, sizeof(hash_node_t*));
	return (main_table);
}
