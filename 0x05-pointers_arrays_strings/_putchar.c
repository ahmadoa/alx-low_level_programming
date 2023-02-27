#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes a character
 * @ch: the character it's going to print
 * Return - 1
 */

int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
