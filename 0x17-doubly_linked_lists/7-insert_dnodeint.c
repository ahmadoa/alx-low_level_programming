#include "lists.h"

/**
 * insert_dnodeint_at_index - adds new node at a specific position
 * @h: pointer to head of linked list
 * @idx: position where to add new node
 * @n: element n in new node
 * Return: new node, NULL it it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *tr;
	unsigned int position = 0;

	if (h == NULL)
		return (NULL);
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	if (idx == 0)
	{
		temp->next = *h;
		temp->prev = NULL;
		if (temp->next != NULL)
			temp->next->prev = temp;
		*h = temp;
	}
	else
	{
		tr = *h;
		while (tr != NULL && position < (idx - 1))
		{
			position++;
			tr = tr->next;
		}
		if (tr == NULL)
		{
			free(temp);
			return (NULL);
		}
		temp->next = tr->next;
		temp->prev = tr;
		if (re->next != NULL)
			tr->next->prev = temp;
		tr->next = temp;
	}
	return (temp);
}
