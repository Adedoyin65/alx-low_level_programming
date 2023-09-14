#include <stdio.h>


/**
 * print_sign(int n) - A function that prints the sign of a number.
 * RETURN: 1 for success, 0 for failure.
 */



int print_sign(int n)
{
	if(n > 0)
	{
		putchar('+');
		putchar('\n');
		return (1);
		
	}
	else if(n == 0)
	{
		putchar('0');
		putchar('\n');
		return (0);

	}
	else
	{
		putchar('-');
		putchar('\n');
		return (-1);
	}
}
