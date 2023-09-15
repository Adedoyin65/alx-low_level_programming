#include <ctype.h>

/**
 * _isupper - function that checks for uppercase.
 * @c: The number to check.
 * Return: 1 for success, 0 for failure
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
		return (0);
}
