#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - A function that frees a list_t list.
 * @head: The head pointer.
 * Return: Nothing.
 */

void free_list(list_t *head)
{
	list_t *dan;
	list_t *next;

	dan = head;
	while (dan != NULL)
	{
		next = dan->next;
		free(dan->str);
		free(dan);
		dan = next;
	}
}
