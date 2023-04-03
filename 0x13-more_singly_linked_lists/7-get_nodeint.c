#include "lists.h"

/**
 * get_nodeint_at_index - returns the node of n index in a linked list
 * @head: head of the linked list
 * @index: index of node
 * Return: return node, NULL if it fails
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ind = 0;
	listint_t *node;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (index == ind)
		{
			return (head);
		}
		head = head->next;
		ind++;
	}
}
