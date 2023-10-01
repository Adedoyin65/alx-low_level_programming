#include <string.h>

/**
 * is_palindrome - Write a function that returns 1 if a string is
 * a palindrome and 0 if not.
 * @s: Input string.
 * Return: Either 1 or 0.
 */

int is_palindrome(char *s)
{
	int i, h;


	i = 0;
	h = strlen(s) - 1;

	if (s[i++] != s[h--])
	{
		return (0);
	}
       	if (s[i++] == s[h--])
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
