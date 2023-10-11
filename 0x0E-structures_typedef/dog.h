#ifndef HEADER_FILE
#define HEADER_FILE
/**
 * struct dog - Declares three variables
 * @name: name of dog.
 * @age: The age of dog.
 * @owner: The name of owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
