#include "lists.h"

/**
 * insert_nodeint_at_index - add node in index n
 * @head: head of the linked list
 * @idx: index where to add the new node
 * @n: integer value of node
 * Return: new modified linked list, NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	while (head)
	{
		if (idx == i)
		{
			new->next = head->next;
			head = new;
		}
		head = head->next;
		i++;
	}

	return (head);
}
