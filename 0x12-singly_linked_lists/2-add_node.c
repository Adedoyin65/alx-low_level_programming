#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - A function that adds a new node at the beginning of a
 * list_t list.
 * @head: Head pointer.
 * @str: The string.
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
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
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	return (0);
}
