#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node
 * of a listint_t linked list.
 * @head: A pointer.
 * @index: index of the node, starting at 0.
 * Return: Data of the nth node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *tmp = head;

	while (tmp != NULL)
	{
		if (count == index)
		{
			return (tmp);
		}
		tmp = tmp->next;
		count++;
	}
	return (NULL);
}
