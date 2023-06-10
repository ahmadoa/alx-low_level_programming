#include "hash_tables.h"

/**
 * key_index - generates index of key
 * @key: key
 * @size: size of array of hash table
 * Return: index where a key/value pair is stored in array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
