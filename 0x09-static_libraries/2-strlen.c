#include <string.h>
#include "main.h"

/**
 * _strlen - Returns the length of a string.
 *
 * @s: pointer to the string whose length is to be returned.
 *
 * Return: length of a string.
 */

int _strlen(char *s)
{
	int counter;

	counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}

	return (counter);
}

