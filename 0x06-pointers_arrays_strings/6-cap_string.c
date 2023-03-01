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
	while (p[i] != '\0')
	{
		if (p[i] == ' ' ||
				p[i] == '\n' ||
				p[i] == '\t' ||
				p[i] == ',' ||
				p[i] == ';' ||
				p[i] == '.' ||
				p[i] == '!' ||
				p[i] == '?' ||
				p[i] == '"' ||
				p[i] == '(' ||
				p[i] == ')' ||
				p[i] == '{' ||
				p[i] == '}' ||
				i == 0)
		{
			if (p[i + 1] >= 'a' && p[i + 1] <= 'z')
				p[i + 1] = p[i + 1] - 32;
		}
		i++;
	}
	if (p[i - 1] == '\n')
		p[i - 1] = '\0';

	return (p);
}
