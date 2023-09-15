#include <ctype.h>

/**
 * int _isupper(int c) - function that checks for uppercase.
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
