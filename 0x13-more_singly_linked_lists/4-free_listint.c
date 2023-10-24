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
	free(head);
}
