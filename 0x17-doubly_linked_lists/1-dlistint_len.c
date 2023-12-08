#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - A function that returns the number of elements in a linked
 * @h: A pointer.
 * Return: Number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count;

	if (h == NULL)
	{
		return (0);
	}
	count = 0;
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
