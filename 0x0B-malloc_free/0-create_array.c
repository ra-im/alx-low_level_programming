#include <stdio.h>

/**
 * create_array - creates an array of char,
 *		and initializs it with a specific char.
 *
 * @size: size of array.
 * @c: array initialization character.
 *
 * Return: null - if size = 0 or if it fales;
 *		otherwise, returns pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	pointer = (char *)malloc(sizeof(char) * size);

	if (pointer == NULL)
		return (0);

	while (i < size)
	{
		c = *(pointer + index);
		i++;
	}

	*(pointer + index) = '\0';

	return (pointer);
}

