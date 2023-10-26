#include <stdio.h>
#include "main.h"

/**
 * flip_bits - A function that returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: First integer.
 * @m: Second integer.
 * Return: The number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dan = n ^ m;
	unsigned int a = 0;

	while (dan > 0)
	{
		a += dan & 1;
		dan >>= 1;
	}
	return (a);
}
