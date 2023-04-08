#include "main.h"

/**
 * binary_to_uint - converts binary string to decimal
 * @b: pointer pointing to the binary string
 * Return: result of converting, 0 if it fails
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int isBin = 1;
	int size = 0;
	int i;
	int bs = 1;

	if (b == NULL)
		return (0);

	while (b[size] != '\0')
	{
		if ((b[size] != '0' && b[size] != '1') || b[size] == NULL)
		{
			isBin = 0;
			break;
		}
		size++;
	}

	if (isBin)
	{
		for (i = size - 1; i >= 0; i--)
		{
			if (b[i] == '1')
			{
				res = res + bs;
			}
			bs = bs * 2;
		}
	}
	else
	{
		return (0);
	}

	return (res);
}
