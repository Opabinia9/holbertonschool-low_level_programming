#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a variable of dog_t type
 * @name: value of name field
 * @age: value for age field
 * @owner: value for owner field
 * Return: pointer to new variable
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;

	dog1 = malloc(sizeof(dog_t));
	if (!dog1)
		return (NULL);
	dog1->name = malloc(sizeof(name));
	if (!dog1->name)
	{
		free(dog1);
		return (NULL);
	}
	dog1->owner = malloc(sizeof(owner));
	if (!dog1->owner)
	{
		free(dog1->name);
		free(dog1);
		return (NULL);
	}
	(*dog1).name = name;
	dog1->age = age;
	(*dog1).owner = owner;

	return (dog1);
}
