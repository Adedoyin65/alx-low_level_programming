#include <stdio.h>
#include "dog.h"

/**
 * print_dog - A function that prints a struct dog
 * @d: variable to print.
 * Return: Nothing.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("%s\n", d->name);
	printf("%.1f\n", d->age);
	printf("%s\n", d->owner);
}

