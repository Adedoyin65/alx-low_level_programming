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

	int n,i;

	while (dest[n])
	{
		n++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[n] = src[i];
		n++;
	}
	dest[n] = '\0';
	return (dest);


}
