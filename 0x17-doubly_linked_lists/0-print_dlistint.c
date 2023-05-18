#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - function that prints all elements of a list
 * @h: head of doubly linked list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
