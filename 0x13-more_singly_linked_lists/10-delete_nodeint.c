#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - A function thats deletes node at index.
 * @head: A pointer.
 * @index: The index of node.
 * Return: Either 1 or -1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new, *tmp = *head;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		new = *head;
		*head = (*head)->next;
		free(new);
		return (1);
	}
	while (tmp != NULL)
	{
		if (count == index - 1 && tmp->next != NULL)
		{
			new = tmp->next;
			tmp->next = new->next;
			free(new);
			return (1);
		}
		tmp = tmp->next;
		count++;
	}
	return (-1);
}
