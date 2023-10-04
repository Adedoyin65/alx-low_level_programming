#include <stdio.h>
#include <stdlib.h>


/**
 * main - Adds positive numbers.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, Result;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	Result = 0;

	for (i = 1; i < argc; i++)
	{
		int num = atoi(argv[i]);

		if (num == 0 && argv[i][0] != '0')
		{
			printf("Error\n");
			return (1);
		}
		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}
		Result += num;
	}
	printf("%d\n", Result);
	return (0);
}


