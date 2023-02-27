#include "main.h"

/**
 * _strlen - computes the length of a string
 * @s: string input
 * Return: length of the string
 */

int _strlen(char *s)
{
	int size = 0;

	while(*s != '\0')
	{
		size++;
		s++;
	}

	return (size);
}
