#include <ctype.h>

/**
 * _isalpha - A function that checks for alphabetic.
 * @c: The character to print.
 * Return: 1 for success, 0 for failure.
 */


int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
