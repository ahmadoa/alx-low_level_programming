#include "hash_tables.h"

/**
 * hash_table_print - prints all elements of hash table
 * @ht: hash table pointer
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int it = 0, i = 0;

	if (ht != NULL)
	{
		printf("{");
		for (it = 0; it < ht->size; it++)
		{
			node = ht->array[it];

			while (node != NULL)
			{
				if (i != 0)
					printf(", ");
				i = 1;
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
			}
		}
		printf("}\n");
	}
}
