#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: head of the linked list
 * Return: reversed linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous;
	listint_t *next;

	previous = NULL;
	next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	*head = previous;
	return (*head);
}
