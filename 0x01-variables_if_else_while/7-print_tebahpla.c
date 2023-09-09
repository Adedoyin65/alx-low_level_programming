#include <stdio.h>


/**
 * main - Write a program that prints the lowercase alphabet in reverse.
 * Return: Always 0;
 */

int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');

	return (0);
}
