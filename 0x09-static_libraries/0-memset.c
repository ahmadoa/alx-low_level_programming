#include "main.h"

/**
 * _memset - fill a block of memory with a value
 * @s: starting address of memory
 * @b: the value
 * @n: number of bytes to be changed
 * Return: changed array
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
