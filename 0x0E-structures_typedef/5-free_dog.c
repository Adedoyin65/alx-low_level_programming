#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Write a function that frees dogs.
 * @d: A pointer.
 * Return: Nothing.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
