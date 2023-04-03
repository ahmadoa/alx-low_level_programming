#include "lists.h"

/**
 * sum_listint - sums all integer elements of nodes in a linked list
 * @head: head of linked list
 * Return: total of sum, 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int total = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
