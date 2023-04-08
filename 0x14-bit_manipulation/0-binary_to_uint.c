#include "main.h"

/**
 * binary_to_uint - converts binary string to decimal
 * @b: pointer pointing to the binary string
 * Return: result of converting, 0 if it fails
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i;
	int size = 0;
	int currIndex = 0;

	if (b == NULL)
		return (0);

	while (b[size] != '\0')
	{
		size++;
	}

	for (i = size - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			res = res + (1 << currIndex);
		}
		else if (b[i] != '0')
		{
			return (0);
		}
		currIndex++;
	}

	return (res);
}
