#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two integers
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int a, b, Result;
	
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	Result = a * b;
	printf("%d\n", Result);
	return (0);

}
