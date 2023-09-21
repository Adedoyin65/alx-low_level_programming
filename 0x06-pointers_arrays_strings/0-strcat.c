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

	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);


}
