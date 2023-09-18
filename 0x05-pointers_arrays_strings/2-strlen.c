#include <stdio.h>


/**
 * _strlen - Returns the length of string
 * @str: The string to get lenght
 * Return: The length of str.
 */


int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
	length++;
	return (length++);
}
