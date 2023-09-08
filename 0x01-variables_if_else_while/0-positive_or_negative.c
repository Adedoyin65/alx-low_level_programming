#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - This program will assign a random number to the variable n
 * each time it is executed.
 * Return: Always 0.
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d is positive\n", n);
	printf("%d is negative\n", n);
	printf("%d is zero\n", n);
	return (0);
}
