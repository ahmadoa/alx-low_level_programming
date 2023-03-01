#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: input array
 * @n: number of elements of the array to swap
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
