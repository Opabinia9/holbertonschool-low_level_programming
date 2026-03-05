#ifndef _PUTCHAR_H
#define _PUTCHAR_H

/**
 * struct dog - dog data type
 * @age: age of dog
 * @name: name of dog
 * @owner: owner of dog
 */
struct dog
{
	float age;
	char *name;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
