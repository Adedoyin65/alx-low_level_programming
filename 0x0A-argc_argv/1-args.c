#include <stdio.h>


/**
 * main - Writes the number of arguments
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{

	if (argv != NULL)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
