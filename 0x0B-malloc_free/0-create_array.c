#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars
 * , and initializes it with a specific char.
 * @size: The size.
 * @c: A character.
 * Return: Always 0.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}

