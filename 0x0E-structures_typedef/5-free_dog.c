#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the allocated memory for a struct type dog_t.
 *
 * @d: struct tobe considered.
 *
 * Return: void.
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		/* feree the name and owner memory via struc poimter */
		free(d->name);
		free(d->owner);

		/* free the age and the entire struct */
		free(d);
	}
}

