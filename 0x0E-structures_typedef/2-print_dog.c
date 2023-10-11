#include <stdio.h>
#include "dog.h"

/**
 * print_dog - A function that prints a struct dog
 * @d: variable to print.
 * Return: Nothing.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("%s\n", (d->name) ? d->name : "(nil)");
		printf("%f\n", (d->age) ? d->age : 0);
		printf("%s\n", (d->owner) ? d->owner : "(nil)");
	}
}

