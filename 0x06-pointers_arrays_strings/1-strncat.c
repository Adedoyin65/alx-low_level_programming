#include <stdio.h>


/**
 * _strncat - Write a function that concatenates two strings.
 * @dest: The first string
 * @src: The source string
 * @n: The number of byte used in src.
 * Return: returns dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	*ptr = '\0';
	return (dest);
}
