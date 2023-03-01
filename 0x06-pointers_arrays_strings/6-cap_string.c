#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @p: input string of words
 * Return: string after conversion
 */

char *cap_string(char *p)
{
	int i;

	i = 0;
	while (p[i])
	{
		while (!p[i] >= 'a' && p[i] <= 'z')
			i++;

		if (p[i - 1] == ' ' ||
				p[i - 1] == '\n' ||
				p[i - 1] == '\t' ||
				p[i - 1] == ',' ||
				p[i - 1] == ';' ||
				p[i - 1] == '.' ||
				p[i - 1] == '!' ||
				p[i - 1] == '?' ||
				p[i - 1] == '"' ||
				p[i - 1] == '(' ||
				p[i - 1] == ')' ||
				p[i - 1] == '{' ||
				p[i - 1] == '}' ||
				i == 0)
		{
			p[i] = p[i] - 32;
		}
		i++;
	}

	return (p);
}
