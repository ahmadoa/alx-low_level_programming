#include "hash_tables.h"

/**
 * hash_table_get - gets value associated with key in hash table
 * @ht: the hash table
 * @key: key to get the value of
 * Return: if key not found NULL, value associated with key if it successeds
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (key == NULL || ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	if (node == NULL)
		return (NULL);
	else
		return (node->value);
}
