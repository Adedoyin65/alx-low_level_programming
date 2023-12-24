#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - A function that create a hash table of size, size.
 * @size: The array size.
 * Return: A pointer.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->array = malloc(sizeof(size));
	if(new->array == NULL)
	{
		return (NULL);
	}
	return (new);
}
