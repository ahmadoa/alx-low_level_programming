#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string input
 * Return: string s after encoding
 */

char *rot13(char *s)
{
	char be[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ae[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == be[j])
			{
				s[i] = ae[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
