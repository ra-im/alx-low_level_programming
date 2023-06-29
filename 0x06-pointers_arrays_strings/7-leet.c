#include "main.h"

/**
 * leet - Enodes a string ito 1337.
 *
 * @strn: string to encode;
 *
 * Return: strn (encoded string)
 */

char *leet(char *strn)
{
	int counter_1, counter_2;

	char *code_1 = "4433007711";
	char *code_2 = "aAeEoOtTlL";

	for (counter_1 = 0;
			strn[counter_1] != '\0';
			counter_1++)
	{
		for (counter_2 = 0; counter_2 < 10; counter_2++)
		{
			if (strn[counter_1] == code_2[counter_2])
			{
				strn[counter_1] = code_1[counter_2];
			}
		}
	}

	return (strn);
}
