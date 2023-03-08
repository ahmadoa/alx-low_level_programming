#include "main.h"

/**
 * _strlen_recursion - compute the length of a string
 * @s: input string
 * Return: length of the s string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
		return (i);
}
