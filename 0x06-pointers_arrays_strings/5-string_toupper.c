#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 *		of a string to uppercase.
 *
 * @strn: string to be changed
 *
 * Return: strn (the changed string)
 */

char *string_toupper(char *strn)
{
	int counter;

	for (counter = 0;
			strn[counter] != '\0';
			counter++)
	{
		if (strn[counter] <= 'z' &&
				strn[counter] >= 'a')
		{
			strn[counter] = strn[counter] - 32;
		}
	}

	return (strn);
}
