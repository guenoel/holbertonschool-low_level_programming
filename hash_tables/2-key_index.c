#include "hash_tables.h"

/**
 * key_index - function to create indexes
 * @key: key created by function hash_djb2
 * @size: numbers of elements in hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
    int c;

    hash = 5381;
    while ((c = *key++))
    {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }
    return (hash % size);
}
