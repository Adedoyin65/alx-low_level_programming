#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - A function that convert from binary to integer.
 * @b: A pointer.
 * Return: The integer value.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		n = n * 2 + (b[i] - '0');
	}
	return (n);
}
