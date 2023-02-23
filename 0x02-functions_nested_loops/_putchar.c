#include <unistd.h>
#include "main.h"

/**
 * _putchar - it writes a character
 * @ch: the character it's going to print
 * Return: returns 1 (On success)
 */

int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
