#include "main.h"

/**
 * cap_string - Capitalizes all the word of a string.
 *
 * @strn: String to be capitalized.
 *
 * Return: strn (capitalized character string)
 */

char *cap_string(char *strn)
{
	int counter_1, counter_2;
	int is_capital;
	char specs[] = ",;.!?(){}\n\t\" ";

	for (counter_1 = 0, is_capital = 0;
			strn[counter_1] != '\0';
			counter_1++)
	{
		if (strn[0] > 96 && strn[0] < 123)
		{
			is_capital = 1;
		}

		for (counter_2 = 0;
				specs[counter_2] != '\0';
				counter_2++)
		{
			if (specs[counter_2] == strn[counter_1])
			{
				is_capital = 1;
			}
		}

		if (is_capital)
		{
			if (strn[counter_1] > 96 &&
					strn[counter_1] < 123)
			{
				strn[counter_1] -= 32;
				is_capital = 0;
			}
			else if (strn[counter_1] > 64 &&
					strn[counter_1] < 91)
			{
				is_capital = 0;
			}
			else if (strn[counter_1] > 47 &&
					strn[counter_1] < 58)
			{
				is_capital = 0;
			}
		}
	}
	
	return (strn);
}

