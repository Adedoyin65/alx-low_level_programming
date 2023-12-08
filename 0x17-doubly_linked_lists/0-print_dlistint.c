#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - A function that prints all the
 * elements of a dlistint_t list.
 * @h: A pointer.
 * Return: The  number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count;

	if (h == NULL)
	{
		return (0);
	}
	count = 0;
	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
