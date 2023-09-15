#include "main.h"

/**
 * _isdigit - Write a function that checks for a digit
 * @c: Number to be checked
 * Return: 1 for true,0 for false.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
