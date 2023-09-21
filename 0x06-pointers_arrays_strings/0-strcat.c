#include <stdio.h>
#include <string.h>


/**
 * _strcat - Write a function that concatenates two strings.
 * @dest: The first string.
 * @src: The second string.
 * Return: return dest.
 */

char *_strcat(char *dest, char *src)
{

	printf("%c", *dest + *src);
	return (dest);
}
