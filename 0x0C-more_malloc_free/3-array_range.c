#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Write a function that creates an array of integers.
 * @min: minimum element.
 * @max: maximum element.
 * Return: returns pointer.
 */

int *array_range(int min, int max)
{
	int i = 0;
	int dan = max - min + 1;
	int *arr = (int *)malloc(dan * sizeof(int));

	if (min > max)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < dan; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}

