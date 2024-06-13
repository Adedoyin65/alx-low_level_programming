#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int n = 50;
	unsigned long long fib1 = 1, fib2 = 2;
	unsigned long long next_fib;
	int i;


	printf("%llu, %llu", fib1, fib2);

	for (i = 3; i <= n; i++)
	{
		next_fib = fib1 + fib2;
		printf(", %llu", next_fib);
		fib1 = fib2;
		fib2 = next_fib;
	}

	printf("\n");

	return (0);
}

