#include <math.h>

/**
 * sqrt - returns the natural square root.
 * @a: Input number.
 * @b: square root.
 * Return: square root of function or -1.
 */

int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}


/**
 * _sqrt_recursion - A function that returns the natural
 * square root of a number.
 * @n: Input integer.
 * Return: Square root.
 */

int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
