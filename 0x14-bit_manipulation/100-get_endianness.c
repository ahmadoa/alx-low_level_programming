#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 big endian, 1 little endian
 */

int get_endianness(void)
{
	int digit = 1;

	char *endi = (char *)&digit;

	if (*endi != 1)
		return (0);

	return (1);
}
