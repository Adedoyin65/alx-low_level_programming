#include <stdio.h>

/**
 * set_string - Write a function that sets the value of a pointer to a char.
 * @s: Input.
 * @to: Input.
 * Return: Always 0.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
