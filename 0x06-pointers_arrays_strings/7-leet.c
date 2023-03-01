#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: input string
 * Return: string after encoding
 */

char *leet(char *s)
{
	char be[] = 'aAeEoOtTlL';
	char ae[] = '4433007711';
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == be[j])
				s[i] = ae[j];
		}
		i++;
	}
	return (s);
}
