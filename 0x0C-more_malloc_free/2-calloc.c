#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Write a function that allocates memory for an array,
 * using malloc
 * @nmemb: Number of element in an array.
 * @size: Size of an element in array.
 * Return: Returns Null.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t totalSize = (size_t)nmemb *  size;
	void *arr = malloc(totalSize);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	memset(arr, 0, totalSize);
	return (arr);
}
