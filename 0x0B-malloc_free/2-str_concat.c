#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Write a function that concatenates two strings.
 * @s1: First string
 * @s2: Second string
 * Return: returns NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	size_t a = strlen(s1);
	size_t b = strlen(s2);
	size_t c = a + b + 1;

	char *concat = (char *)malloc(c * sizeof(char));


	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (concat == NULL)
	{
		return (NULL);
	}
	strcpy(concat, s1);
	strcat(concat, s2);
	return (concat);
}

