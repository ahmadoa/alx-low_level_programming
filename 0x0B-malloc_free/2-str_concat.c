#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the allocated mem containing the two strings
 */

char *str_concat(char *s1, char *s2)
{
	int s1size = 0;
	int s2size = 0;
	int k, limit;
	char *str;

	while (s1[s1size] != '\0')
		s1size++;

	while (s2[s2size] != '\0')
		s2size++;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	str = malloc(sizeof(char) * (s1size + s2size + 1));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (k = 0; k < s1size; k++)
		str[k] = s1[k];

	limit = s2size;
	for (s2size = 0; s2size <= limit; k++, s2size++)
		str[k] = s2[s2size];

	return (str);
}
