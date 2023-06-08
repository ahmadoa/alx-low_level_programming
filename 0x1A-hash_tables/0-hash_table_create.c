#include "hash_table.h"

/**
 * hash_table_create - create a hash table
 * @size: size of array
 * Return: a pointer to the created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;

	if (size == NULL)
		return (NULL);

	hash_t = calloc(1, sizeof(hash_table_t));

	if (hash_t == NULL)
		return (NULL);

	hash_t->size = size;
	hash_t->array = calloc(size, sizeof(hash_node_t *));

	if (hash_t->array == NULL)
	{
		free(hash_t);
		return (NULL);
	}

	return (hash_t);
}
