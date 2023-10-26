#include <stdio.h>
#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index.
 * @n: An integer.
 * @index: The index.
 * Return: the value of the bit at index index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	return ((int)((n >> index) & 1));
}
