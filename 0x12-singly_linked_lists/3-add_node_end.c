#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 * Return: address of the new element, NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *temp2;
	unsigned int length = 0;

	if (str == NULL)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	while (str[length])
		length++;
	temp->len = length;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	temp2 = *head;
	while (temp2->next)
		temp2 = temp2->next;
	temp2->next = temp;
	return (temp);
}
