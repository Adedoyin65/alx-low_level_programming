#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - A function that adds a new node at beginning of a list
 * @head: A pointer.
 * @n: An integer.
 * Return: The address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		(*head)->prev = new;
		new->next = *head;
		*head = new;
	}
	return (*head);
}
