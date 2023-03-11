#include "main.h"

/**
 * _isupper - checks if character is uppercase
 * @c: the character to check
 * Return: 1 if it's uppercase, 0 if it's not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
