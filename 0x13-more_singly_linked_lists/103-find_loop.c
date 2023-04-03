#include "lists.h"

/**
 * find_listint_loop - finds a loop in a linked list
 * @head: head of the linked list
 * Return: address of node where loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pre;
	listint_t *prev;

	pre = head;
	prev = head;
	while (head && pre && pre->next)
	{
		head = head->next;
		pre = pre->next->next;

		if (head == pre)
		{
			head = prev;
			prev = pre;
			while (1)
			{
				pre = prev;
				while (pre->next != head && pre->next != prev)
				{
					pre = pre->next;
				}
				if (pre->next == head)
					break;

				head = head->next;
			}
			return (pre->next);
		}
	}

	return (NULL);
}
