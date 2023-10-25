#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Write a function that inserts a new node
 * at a given position.
 * @head: A pointer.
 * @idx: Index of the list.
 * @n: An integer.
 * Return: The inserted list.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new, *tmp;

	if (idx == 0)
	{
		new = (listint_t *)malloc(sizeof(listint_t));
		if (new == NULL)
		{
			return (NULL);
		}
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp != NULL)
	{
		if (count == idx - 1)
		{
			new = (listint_t *)malloc(sizeof(listint_t));
			if (new == NULL)
			{
				return (0);
			}
			new->n = n;
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		tmp = tmp->next;
		count++;
	}
	return (0);
}
