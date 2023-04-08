#include "main.h"

/**
 * flip_bits - calculates number of bits to flip
 * to get from number to another
 * @n: first number
 * @m: second number
 * Return: number of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xOR = n ^ m;
	unsigned long int nFlipBits = 0;

	while (xOR > 0)
	{
		nFlipBits = nFlipBits + (xOR & 1);
		xOR = xOR >> 1;
	}

	return (nFlipBits);
}
