#include "main.h"

/**
 * set_bit - set the bit at index index in n to 1
 * @n: the integer
 * @index: the position of the bit to set to 1
 * Return: 1 if it successeds, -1 if it fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int nsize = sizeof(unsigned long int) * 8;
	unsigned int mask = 1 << index;

	if (index >= nsize)
		return (-1);

	*n = *n | mask;

	return (1);
}
