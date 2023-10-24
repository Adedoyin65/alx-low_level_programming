#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list.
 * @head: A pointer.
 * Return: Nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *new;

	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new);
	}
}
