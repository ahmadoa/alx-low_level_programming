#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string input
 * @s2: second string input
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0, lens1 = 0, lens2 = 0;

	while (s1 && s1[lens1])
		lens1++;

	while (s2 && s2[lens2])
		lens2++;

	if (n < lens2)
		str = malloc(sizeof(char) * (lens1 + n + 1));
	else
		str = malloc(sizeof(char) * (lens1 + lens2 + 1));

	if (!str)
		return (NULL);

	while (i < lens1)
	{
		str[i] = s1[i];
		i++;
	}

	while (n < lens2 && i < (lens1 + n))
		str[i++] = s2[j++];

	while (n >= lens2 && i < (lens1 + lens2))
		str[i++] = s2[j++];

	str[i] = '\0';

	return (str);
}
