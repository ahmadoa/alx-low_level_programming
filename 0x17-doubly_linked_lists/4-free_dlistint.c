#include "lists.h"

/**
 * free_dlistint - function that frees a doubly linked list
 * @head: pointer to head of linked list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
	}

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
