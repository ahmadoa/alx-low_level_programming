#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates & initializes an array of chars
 * @size: size in memory to allocate
 * @c: initialization value
 * Return: pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
