#include <stdio.h>


/**
 * _memset - Write a function that fills memory with a constant byte.
 * @s: Memory area.
 * @b: Constant byte.
 * @n: First n byte of memory
 * Return: Returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
