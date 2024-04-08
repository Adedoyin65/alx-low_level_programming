#include <stdio.h>
/**
 * linear_search - A function that searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: A pointer to the array
 * @size: The size of the array
 * @value: The value to be found
 * Return: The index of value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; ++i)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
