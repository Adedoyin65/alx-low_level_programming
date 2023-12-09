#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - A function that adds a new node at the end of a dlist.
 * @head: A pointer.
 * @n: An integer.
 * Return: The address of the new element.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = tmp = new;
	}
	tmp->next = new;
	new->prev = tmp;
	tmp = new;
	return (new);
}
