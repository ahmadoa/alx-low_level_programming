#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - function that counts elements in a linked list
 * @h: head pointer to doubly linked list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
