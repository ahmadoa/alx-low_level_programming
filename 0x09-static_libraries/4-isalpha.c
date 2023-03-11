#include "main.h"

/**
 * _isalpha - checks the char if it's alphabetic or not
 * @c: the char to test
 * Return: returns 1 if it's alphabetic and 0 if it's not
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
