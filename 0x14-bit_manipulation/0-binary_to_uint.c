#include "main.h"

/**
 * binary_to_uint - converts binary string to decimal
 * @b: pointer pointing to the binary string
 * Return: result of converting, 0 if it fails
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	unsigned int isBin = 1;
	unsigned int index = 0;
	unsigned int digit = 0;

	while (b[index] != '\0')
	{
		if ((b[index] != '0' && b[index] != '1') || b[index] == NULL)
		{
			isBin = 0;
			break;
		}
		index++;
	}

	if (isBin)
	{
		index = 0;

		while (b[index] != '\0')
		{
			/**
			 * convert the char to unit
			 * since binary is base 2
			 * multiply the current res by 2 and add the digit
			 * res represents the current position
			 */
			digit = b[index] - '0';
			res = res * 2 + (digit);
			index++;
		}
	}
	else
	{
		return (0);
	}

	return (res);
}
