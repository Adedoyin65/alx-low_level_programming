#include <stdio.h>


/**
 * swap_int - swaps the values of two integers.
 * @a: The first integer
 * @b: The second integer
 * Return: Nothing.
 */


void swap_int(int *a, int *b)
{
	int dan = *a;

	*a = *b;
	*b = dan;
}
