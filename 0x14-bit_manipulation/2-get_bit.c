#include "main.h"

/**
 * get_bit - returns the bit in index in n
 * @n: the number
 * @index: position of bit in number
 * Return: 0 if bit is 0, 1 if it's 1, -1 if it fails
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask = 1 << index;
	unsigned long int nsize = sizeof(unsigned long int) * 8;

	if (index >= nsize)
		return (-1);

	if ((n & mask) == 0)
		return (0);

	return (1);
}
