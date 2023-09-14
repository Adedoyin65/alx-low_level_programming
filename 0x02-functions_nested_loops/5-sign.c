#include <stdio.h>
#include <unistd.h>


/**
 * print_sign(int n) - A function that prints the sign of a number.
 * RETURN: 1 for success, 0 for failure.
 */



int print_sign(int n)
{
	if(n > 0)
	{
		printf("+");
		return (1);
	}
	else if(n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-");
		return (-1);
	}
}
