#include "lists.h"

/**
 * list_len - count number of elements
 * @h: pointer to linked list
 * Return: number of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	const list_t *tmp;

	unsigned int count = 0;

	tmp = h;

	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
