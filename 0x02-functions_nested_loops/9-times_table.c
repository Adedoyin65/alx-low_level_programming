#include <stdio.h>
/**
 * times_table - A function that prints the 9 times table, starting with 0.
 * Return: Nothing
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			printf("%d", i * j);
			if (i * j < 10)
			{
				printf("");
			}
			if (j != 9)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
