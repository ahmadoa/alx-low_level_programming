#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - add new node at the end of the linked list
 * @head: head node of a doubly linked list
 * @n: element to add to the new node
 * Return: new node, NULL if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *tr;

	if (head == NULL)
		return (NULL);

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;

	if (*head == NULL)
	{
		temp->next = *head;
		temp->prev = NULL;
		*head = temp;
	}
	else
	{
		tr = *head;
		while (tr->next != NULL)
			tr = tr->next;
		temp->prev = NULL;
		temp->prev = tr;
		tr->next = temp;
	}
	return (temp);
}
