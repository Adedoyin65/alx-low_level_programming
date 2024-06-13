#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int n = 50;
	int fib1 = 1, fib2 = 2;
	int next_fib;
	int i;


	printf("%d, %d", fib1, fib2);

	for (i = 3; i <= n; i++)
	{
		next_fib = fib1 + fib2;
		printf(", %d", next_fib);
		fib1 = fib2;
		fib2 = next_fib;
	}

	printf("\n");

	return (0);
}

