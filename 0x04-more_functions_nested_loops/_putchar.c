#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes a character
 * @c: the character to be print
 * Return: 1 (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
