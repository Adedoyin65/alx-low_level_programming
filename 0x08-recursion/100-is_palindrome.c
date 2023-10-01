#include <string.h>

/**
 * is_palindrome_recursive - A recursive function.
 * @s: Input string.
 * @i: Starting character.
 * @h: End character.
 * Return: Either 1 or 0.
 */

int is_palindrome_recursive(char *s, int i, int h)
{
	if (i >= h)
	{
		return (1);
	}
	if (s[i] != s[h])
	{
		return (0);
	}
	return (is_palindrome_recursive(s, i++, h--));
}

/**
 * is_palindrome - Write a function that returns 1 if a string is
 * a palindrome and 0 if not.
 * @s: Input string.
 * Return: Either 1 or 0.
 */

int is_palindrome(char *s)
{
	int a = strlen(s);

	return (is_palindrome_recursive(s, 0, a - 1));

}
