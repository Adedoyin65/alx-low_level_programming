#include <ctype.h>


/**
 * _islower(int c) - A function that checks for lowercase.
 * islower(c) - returns 1 for true, 0 for false.
 * RETURN: 1 for success, 0 for failure.
 */


int _islower(int c)
{


	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

