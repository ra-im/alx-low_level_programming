#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - determines a string's length.
 *
 * @s: string to be considered
 *
 * Return: length of a string.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}

/**
 * _strcpy - cpoies string from src o dest.
 *
 * @src: source to cpoy from.
 * @dest: destination to copy to.
 *
 * Return: pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
		;

	for (j = 0; j < i; j++)
		dest[j] = src[i];

	dest[j] = '\0';

	return (dest);
}


/**
 * new_dog - creates a new dog.
 *
 * @name: name of the new dog.
 * @age: age of the new dog.
 * @owner: ownse of the new dog.
 *
 * Return: NULL - (on failure);
 * otherwise return a struct of type dog_t.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	dog_t pitbull;

	i = _strlen(name);
	j = _strlen(owner);

	pitbull = malloc(sizeof(dog_t));
	if (pitbull == NULL)
		return (NULL);

	pibull->name = malloc(sizeof(char) * (i + 1));
	if (pitbull->name == NULL)
	{
		free(pitbull);
		
		return (NUL);
	}

	pitbull->owner = malloc(sizeof(char) * (j + 1));
	if (pitbull->owner == NULL)
	{
		free(pitbull);
		free(pitbull>name);

		return (NULL);
	}

	_strcpy(pitbull->name, name);
	_strcpy(pitbull->owner, owner);

	pitbull->age = age;

	return (pitbull);
}

