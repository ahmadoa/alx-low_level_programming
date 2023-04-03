#include "lists.h"

/**
 * pop_listint - remove first node and return it's value
 * @head: head of the linked list
 * Return: value of first node
 */

int pop_listint(listint_t **head)
{
	int value;
	listint_t *h;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;

	value = current->n;

	h = current->next;

	free(current);

	*head = h;

	return (value);
}
