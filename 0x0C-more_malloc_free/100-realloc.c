#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - Reallocaes a memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated tyo call malloc.
 * @old_size: size of the allocated space for ptr, in bytes.
 * @new_size: new size of the new block memory, in bytes.
 *
 * Return: void.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *old_ptr;
	char *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	new_ptr = malloc(new_size);

	if (!new_ptr)
		return (NULL);

	old_ptr = ptr;

	if (ptr)
	{
		if (new_size < old_size)
			memcpy(new_ptr, ptr, new_size);
		else
			memcpy(new_ptr, ptr, old_size);

		free(ptr);
	}

	return (new_ptr);
}

