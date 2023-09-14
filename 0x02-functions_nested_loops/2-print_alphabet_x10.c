#include <stdio.h>
#include "main.h"


/**
 * print_alphabet_x10.c - A function that prints 10 times the alphabet.
 */


void print_alphabet_x10(void)
{
	char alphabet;
	int i = 0;

	while (i < 10)
	{
		alphabet = 'a';

		while (alphabet <= 'z')
		{
			putchar(alphabet);
			alphabet++;
		}
		putchar('\n');
		i++;
	}

}
