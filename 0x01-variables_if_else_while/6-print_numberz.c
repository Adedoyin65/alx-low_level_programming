#include <stdio.h>


/**
 * main - A program that prints all single digit numbers of base 10.
 * Return: Always 0.
 */

int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	putchar(d);
	putchar('\n');

	return (0);
}
