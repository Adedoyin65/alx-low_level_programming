#include <stdio.h>

/**
 * _memcpy - Write a function that copies memory area.
 * @n: number of byte.
 * @src: source memory area
 * @dest: destination memory area
 * Return: Returns a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
