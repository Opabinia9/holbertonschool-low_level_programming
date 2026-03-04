#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initalize a variable of dog type
 * @d: pointer to variable to initialize
 * @name: value for name property
 * @age: value for age property
 * @owner: value for owner property
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		exit(1);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
