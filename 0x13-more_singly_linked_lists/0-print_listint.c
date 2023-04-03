#include "lists.h"

/**
 * print_listint - print elements of a linked list
 * @h: a linked list of type listint_t
 * Return: number of nodes in the linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("%d\n", h->n);
		s++;
		h = h->next;
	}

	return (s);
}
