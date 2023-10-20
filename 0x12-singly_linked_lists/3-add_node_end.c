#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - A function that adds a new node at the end of a
 * list_t list.
 * @head: Head pointer.
 * @str: string pointer.
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *dan;
	char *new_str;
	int str_len = 0;

	if (str != NULL)
	{
		new_str = strdup(str);
		if (new_str == NULL)
		{
			return (NULL);
		}
		while (str[str_len])
		{
			str_len++;
		}
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
		{
			free(new_str);
			return (NULL);
		}
		new_node->str = new_str;
		new_node->len = str_len;
		new_node->next = NULL;

		if (*head == NULL)
		{
			*head = new_node;
		}
		else
		{
			dan = *head;
			while (dan->next != NULL)
			{
				dan = dan->next;
			}
			dan->next = new_node;
		} return (new_node);
	} return (0);
}
