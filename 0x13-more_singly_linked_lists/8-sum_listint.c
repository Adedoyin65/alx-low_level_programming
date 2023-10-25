#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all the data.
 * @head: Head pointer.
 * Return: Returns the sum of all data.
 */

int sum_listint(listint_t *head)
{
	int n;
	listint_t *tmp;

	if (head == NULL)
	{
		return (0);
	}
	tmp = head;
	n = tmp->n;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		n += tmp->n;
	}
	return (n);
}
