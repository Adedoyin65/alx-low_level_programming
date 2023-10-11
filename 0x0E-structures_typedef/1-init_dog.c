#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Write a function that initialize a variable of type struct dog
 * @d: The name of the variable.
 * @name: Name of dog.
 * @age: Age of dog.
 * @owner: Dog owner.
 * Return: Nothing.
 */



void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
