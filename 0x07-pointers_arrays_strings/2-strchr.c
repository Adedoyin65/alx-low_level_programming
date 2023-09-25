#include <stdio.h>

/**
 * _strchr - Write a function that locates a character in a string.
 * @s: The string.
 * @c: The character.
 * Return: Either returns a pointer or null.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
