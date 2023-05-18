#include "lists.h"

/**
 * sum_dlistint - function that sums all data in linked list
 * @head: pointer to head of list
 * Return: sum of n data
 */

int sum_dlistint(dlistint_t *head)
{
	int res = 0;

	if (head == NULL)
		return (0);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		res += head->n;
		head = head->next;
	}

	return (res);
}
