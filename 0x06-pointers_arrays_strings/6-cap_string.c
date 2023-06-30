#include "main.h"

/**
 * cap_string - Capitalizes all the word of a string.
 * @strn: String to be capitalized.
 * Return: strn (capitalized character string)
 */

char *cap_string(char *strn)
{
	int i, j;
	int trigger;
	char specs[] = ",;.!?(){}\n\t\" ";

	for (i = 0, trigger = 0; strn[i] != '\0'; i++)
	{
		if (strn[0] > 96 && strn[0] < 123)
			trigger = 1;
		for (j = 0; specs[j] != '\0'; j++)
		{
			if (specs[j] == strn[i])
				trigger = 1;
		}

		if (trigger)
		{
			if (strn[i] > 96 && strn[i] < 123)
			{
				strn[i] -= 32;
				trigger = 0;
			}
			else if (strn[i] > 64 && strn[i] < 91)
				trigger = 0;
			else if (strn[i] > 47 && strn[i] < 58)
				trigger = 0;
		}
	}
	return (strn);
}
