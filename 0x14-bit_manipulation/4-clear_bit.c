#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at index index
 * @n: pointer to number
 * @index: index where we should set the bit to 0
 * Return: 1 if it successeds, -1 if it fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1 << index;
	unsigned int NOTmask = ~mask;
	unsigned long int nsize =  sizeof(unsigned long int) * 8;

	if (index >= nsize)
		return (-1);

	*n = *n & NOTmask;

	return (1);
}
