#include "main.h"

/**
 * _isdigit - checks if integer is a digit
 * @c: the integer to be checked
 * Return: 1 if it is digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
