#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns new string containing str
 * @str: string to copy
 * Return: new string, NULL if it fails
 */

char *_strdup(char *str)
{
	char *newstr;
	int i, size = 0;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	newstr = malloc(sizeof(char) * (size + 1));

	if (newstr == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
		newstr[i] = str[i];

	return (newstr);
}
