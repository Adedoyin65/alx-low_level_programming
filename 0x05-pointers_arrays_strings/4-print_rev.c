#include <stdio.h>


/**
 * print_rev - prints a string in reverse
 * @s: The string to print
 * Return: Nothing.
 */


void print_rev(char *s)
{
	int d = 0;

	while (s[d] != '\0')
	{
	d++;
	}
	for (d -= 1; d >= 0; d--)
	{
	putchar(s[d]);
	}
	putchar('\n');
}
