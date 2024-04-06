#include <stdio.h>
/**
 * print_last_digit - A function that prints the last digit of a number.
 * @n: An integer
 * Return: The last digit of a number
 */

int print_last_digit(int n)
{
	int last_digit;

	n = (n < 0) ? -n : n;
	last_digit = n % 10;
	printf("%d", last_digit);
	return (last_digit);
}
