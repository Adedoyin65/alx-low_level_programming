#include <stdio.h>

/**
 * is_divisible - Calculate the prime number.
 * @n: Input integer.
 * @divisor: To divide n.
 * Return: is_divisible.
 */

int is_divisible(int n, int divisor)
{
	if (divisor == 1)
	{
		return (0);
	}
	if (divisor == 2)
	{
		return ((n % 2 == 0) ? 1 : 0);
	}
	if (n % divisor == 0)
	{
		return (1);
	}
	return (is_divisible(n, divisor - 1));
}


/**
 * is_prime_number - A function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: Input integer.
 * Return: Either 1 or 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2 || n == 3)
	{
		return (1);
	}
	return (!is_divisible(n, n - 1));

}
