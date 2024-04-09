#include <stdio.h>
#include <math.h>
/**
 * binary_search - A function that searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: A pointer to the array
 * @size: The size of the array
 * @value: The value to be found
 * Return: The index of value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid, i;

	if (array == NULL)
	{
		return (-1);
	}
	left = 0;
	right = size - 1;
	mid = (int)floor((left + right) / 2);
	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i == right)
		{
			printf("%d ", array[i]);
		}
		else
		{
			printf("%d, ", array[i]);
		}
	}
	printf("\n");
	if (array[mid] == value)
	{
		return (mid);
	}
	else if (array[mid] < value)
	{
		left = mid + 1;
	}
	else
	{
		right = mid - 1;
	}
	return (-1);
}