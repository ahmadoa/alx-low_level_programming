#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns n node in a linked list
 * @head: pointer to head of linked list
 * @index: position of node to get in the linked list
 * Return: node at position n, NULL if it fails
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count < index)
	{
		if (head == NULL)
			return (NULL);
		count++;
		head = head->next;
	}
	return (head);
}
