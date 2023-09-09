#include <stdio.h>


/**
 * main - Write a program that prints the alphabet in lowercase,
 *  followed by a new line.
 *  Return: Always 0.
 */

int main(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
	if (low != e && low != q)
	putchar(low);
	}
	putchar('\n');

	return (0);
}
