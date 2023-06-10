#include "hash_tables.h"

/**
 * hash_table_set - adds new key/value pair to hash table
 * @ht: hash table
 * @key: key
 * @value: value of key
 * Return: 1 if it successeds, 0 if it fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index;
	hash_node_t *new;

	if (ht == NULL || key == NULL || !value || !ht->array || !ht->size)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
	{
		ht->array[index]->value = strdup(value);
		if (!ht->array[index]->value)
			return (0);
		return (1);
	}

	new = malloc(sizeof(hash_node_t));

	if (!new)
	{
		return (0);
	}

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
