#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list.
 * @head: A pointer.
 * Return: Nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *new, *tmp;

	if (head == NULL)
	{
		return;
	}
	new = *head;
	while (new != NULL)
	{
		tmp = new;
		new = new->next;
		free(tmp);
	}
	*head = NULL;
}
