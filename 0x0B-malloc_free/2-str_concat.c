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
	char *str;

	while (s1[s1size] != '\0')
		s1size++;

	while (s2[s2size] != '\0')
		s2size++;

	if (s1 == NULL)
		s1 = '\0';

	if (s2 == NULL)
		s2 = '\0';

	str = malloc(sizeof(char) * (s1size + s2size + 1));

	if (str == NULL)
		return (NULL);

	s1size = s2size = 0;

	while (s1[s1size] != '\0')
	{
		str[s1size] = s1[s1size];
		s1size++;
	}

	while (s2[s2size] != '\0')
	{
		str[s1size] = s2[s2size];
		s1size++;
		s2size++;
	}

	str[s1size] = '\0';
	return (str);
}
