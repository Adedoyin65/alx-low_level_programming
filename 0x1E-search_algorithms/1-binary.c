#include <stdio.h>
#include <math.h>

int binary_search(int *array, size_t size, int value)
{
        size_t i, left, right, mid;

        if (array == NULL)
        {
                printf("Array is NULL\n");
                return -1;
        }

        left = 0;
        right = size - 1;

        while (left <= right)
        {
                printf("Searching in subarray: ");
                for (i = left; i <= right; ++i)
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

                mid = (int)floor(left + (right - left) / 2);

                if (array[mid] == value)
                {
                        return mid;
                }
                else if (array[mid] < value)
                {
                        left = mid + 1;
                }
                else
                {
                        right = mid - 1;
                }
        }
        return -1;
}
