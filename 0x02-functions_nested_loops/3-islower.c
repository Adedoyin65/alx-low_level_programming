#include <ctype.h>


/**
 * _islower - A function that checks for lowercase.
 * RETURN: 1 for success, 0 for failure.
 */


int _islower(int c) // c is the input integer
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

