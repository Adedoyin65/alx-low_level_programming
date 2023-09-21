#include <stdio.h>


/**
 * _strncpy - Write a function that copies a string.
 * @dest: The first string.
 * @src: The source.
 * @n: The number of byte.
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
