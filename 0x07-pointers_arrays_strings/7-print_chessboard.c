#include <stdio.h>

/**
 * print_chessboard - Write a function that prints the chessboard.
 * @a: Array
 * Return: Always 0.
 */


void print_chessboard(char (*a)[8])
{
	int i, n;

	for (i = 0; i < 8; i++)
	{
		for (n = 0; n < 8; n++)
			putchar(a[i][n]);
		putchar('\n');
	}
}
