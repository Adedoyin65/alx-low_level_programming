#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - A function that adds a new node at the beginning
 * of a listint_t list.
 * @*head: A pointer.
 * @n: An integer.
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (listint_t *)malloc(sizeof(listint_t));
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
	