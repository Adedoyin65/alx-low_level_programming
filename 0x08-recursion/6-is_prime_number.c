#include <stdio.h>


/**
 * is_prime_number - A function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: Input integer.
 * Return: Either 1 or 0.
 */

int is_prime_number(int n)
{
	int i, w;

	if (n <= 1)
	{
		return (0);
	}
	if (n <= 3)
	{
		return (1);
	}
	if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}

	i = 5;
	w = 2;

	while (i * i <= n)
	{
		if (n % i == 0)
		{
			return (0);
		}
		i += w;
		w = 6 - w;
	}
	return (1);

}
