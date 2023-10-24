#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a list.
 * @head: A pointer.
 * Return: The value of the popped node.
 */

int pop_listint(listint_t **head)
{
	listint_t *new;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	new = *head;
	n = new->n;
	*head = new->next;
	return (n);
}
