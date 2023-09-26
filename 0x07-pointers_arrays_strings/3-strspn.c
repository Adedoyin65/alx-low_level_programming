#include <stdio.h>

/**
 * _strspn - Write a function that gets the length of a prefix substring
 * @s: Input
 * @accept: Input.
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; s[i] != accept[k]; k++)
		{
			if (accept[k] == '\0')
				return (i);
		}
	}
	return (0);
}
