#include <stdio.h>


/**
 * main - A program that prints all possible different combinations
 * Return: Always 0.
 */


int main(void)
{
	int num;

	for (num = 0; num <= 89; num++)
	{
		putchar((num / 10) + '0');
		putchar((num % 10) + '0');
		if (num != 89)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
