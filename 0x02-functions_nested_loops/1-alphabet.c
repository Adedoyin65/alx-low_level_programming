#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - A function that prints alphabet in lowercase.
 * Return: Always 0.
 */


void print_alphabet(void)
{
	char alphabet = 'a';

	while(alphabet <= 'z')
	{
		putchar(alphabet);

		alphabet++;
	}
	putchar('\n');
}




