#include "main.h"

/**
 * rot13 - Encodes a string using rot13..
 *
 * @strn: String to be encoded.
 *
 * Return: strn (encoded char string).
 */

char *rot13(char *strn)
{
	int counter_1, counter_2;

	char code_1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char code_2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (counter_1 = 0;
			strn[counter_1] != '\0';
			counter_1++)
	{
		for (counter_2 = 0;
				a[counter_2] != '\0';
				counter_2++)
		{
			if (strn[counter_1] == a[counter_2])
			{
				strn[counter_1] = b[counter_2];
				break;
			}
		}
	}
	return (strn);
}
