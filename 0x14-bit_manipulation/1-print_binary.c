#include "main.h"

/**
 * print_binary - prints the binary format of an int
 * @n: the int to convert
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int size = sizeof(n) * 8;
	int i;
	int currentBit;
	int mostSign = -1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = size - 1; i >= 0; i--)
	{
		currentBit = (n >> i) & 1;
		if (currentBit)
		{
			mostSign = i;
			break;
		}
	}

	for (i = mostSign; i >= 0; i--)
	{
		currentBit = (n >> i) & 1;
		_putchar(currentBit ? '1' : '0');
	}
}
