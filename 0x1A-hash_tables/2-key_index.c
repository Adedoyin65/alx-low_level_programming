#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - A function that gives you the index of a key.
 * @key: A string.
 * @size: size of the array.
 * Return: index of key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int n;

	n = hash_djb2(key);
	return (n % size);
}
