#include "main.h"

/**
 * _islower - checks if a char is lowercased
 * @c: the character
 * Return: 1 in case it's lowercase 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
