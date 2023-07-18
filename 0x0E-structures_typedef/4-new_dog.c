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
	int j, i;

	j = 0;

	while (src[j] != '\0')
		j++;

	for (i = 0; i < j; i++)
		dest[i] = src[i];

	dest[i] = '\0';

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
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

