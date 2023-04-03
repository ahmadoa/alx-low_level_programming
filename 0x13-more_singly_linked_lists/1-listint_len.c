#include "lists.h"

/**
 * listint_len - counts the elements in a linked list
 * @h: the linked list head
 * Return: number of nodes in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	while (h)
	{
		h = h->n;
		length++;
	}

	return (length);
}
