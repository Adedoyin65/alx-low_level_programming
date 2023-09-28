#include <stdio.h>


/**
 * factorial - A function that returns the factorial of a given number.
 * @n: Input integer.
 * Return: integer.
 */


int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	printf("%d", n * factorial(n - 1));
	return (n);
}
