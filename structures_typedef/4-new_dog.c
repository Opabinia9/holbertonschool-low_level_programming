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
	unsigned int x = 0, y = 0;
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
	while (name[y])
		y++;
	while (x < y)
	{
		dog1->name[x] = name[x];
		x++;
	}
	x = 0, y = 0;
	while (owner[y])
		y++;
	while (x < y)
	{
		dog1->owner[x] = owner[x];
		x++;
	}
	dog1->age = age;

	return (dog1);
}
