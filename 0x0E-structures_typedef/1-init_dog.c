#include <stdlib.h>
#include "dog.h"
#include "main.h"

/**
 * init_dog - initializes a variable of type `struct dog`.
 *
 * @d: pointer to the structure.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 *
 * Return: void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

