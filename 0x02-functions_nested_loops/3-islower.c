#include <ctype.h>


/**
 * _islower - A function that checks for lowercase.
 * RETURN: 1 for success, 0 for failure.
 */

/* int c is the input parameter*/
int _islower(int c)
{


	if (islower(c))
	{
		/*returns 1 for true*/
		return (1);
	}
	else
	{
		/*returns 0 for false*/
		return (0);
	}
}

