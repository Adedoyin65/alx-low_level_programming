#include <ctype.h>

/**
 * _isalpha(int c) - A function that checks for alphabetic.
 * RETURN: 1 for success, 0 for failure.
 */


int _isalpha(int c)
{
	if(isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
