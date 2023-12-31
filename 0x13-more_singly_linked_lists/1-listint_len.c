#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - A function that returns the number of
 * elements in a linked listint_t list.
 * @h: A pointer.
 * Return: Return number of elements.
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
