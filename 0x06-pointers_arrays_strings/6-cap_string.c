#include "main.h"
#include  <ctype.h>

/**
 * cap_string - Capitalizes all the word of a string.
 *
 * @strn: String to be capitalized.
 *
 * Return: strn (capitalized character string)
 */

char *cap_string(char *strn)
{
	int counter;

	for (counter = 0;
			strn[counter] != '\0';
			counter++)
	{
		strn[counter] = toupper(strn[counter]);
	}

	return (strn);
}
