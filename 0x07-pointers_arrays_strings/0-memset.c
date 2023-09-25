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
	char *ptr = s;

	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
	}
	return (s);
}
