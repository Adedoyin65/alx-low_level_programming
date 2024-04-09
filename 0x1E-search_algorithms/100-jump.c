#include <stdio.h>
#include <math.h>
/**
 * jump_search - A function that searches for a value in a sorted
 * array of integers using the Jump search algorithm
 * @array: A pointer to the array
 * @size: The size of the array
 * @value: The value to be found
 * Return: The index of the value.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step, prev;
	
	if (array == NULL)
	{
		return (-1);
	}

	step = sqrt(size);
	prev = 0;

	while (array[(int)fmin(step, size) - 1] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
		if (prev >= size)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", prev, size - 1);
			return (-1);
		}
	}

	while (array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev == (int)fmin(step, size))
		{
			printf("Value found between indexes [%ld] and [%d]\n", prev, (int)fmin(step, size));
			return (-1);
		}
	}

	if (array[prev] == value)
	{
		printf("Value found between indexes [%ld] and [%d]\n", prev, (int)fmin(step, size));
		return (prev);
	}

	return (-1);
}
