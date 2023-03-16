#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory of size b
 * @b: allocation size
 * Return: pointer to allocated memory, 98 if it fails
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
