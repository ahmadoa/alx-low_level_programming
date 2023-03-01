#include "main.h"

/**
 * _strncat - concatenates n char from second string
 * @dest: input string
 * @src: input string
 * @n: number of character to concatenate from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;

	j = 0;
	while (j <= n - 1 && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
