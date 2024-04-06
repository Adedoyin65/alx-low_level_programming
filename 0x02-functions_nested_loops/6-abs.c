#include <stdio.h>
/**
 * _abs - A function that computes the absolute value of an integer.
 * @n: An integer
 * Return: The non negative of the number.
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
