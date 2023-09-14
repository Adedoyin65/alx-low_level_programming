#include <ctype.h>


/**
 * _islower - A function that checks for lowercase.
 * @c: The character to print.
 * Return: 1 for success, 0 for failure.
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

