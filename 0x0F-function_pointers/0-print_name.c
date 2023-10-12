#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Write a function that prints a name.
 * @name: The name to print.
 * @f: A pointer.
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
