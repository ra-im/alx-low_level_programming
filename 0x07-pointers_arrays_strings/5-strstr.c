#include <stdio.h>
#include "main.h"

/**
 * _strstr - Locates a substring.
 *
 * @haystack: String to e considered.
 * @needle: Substring to e consdered.
 *
 * Return: A pointer to the beginning of the located
 * substring; otherwise returns NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int counter_1, counter_2;

	for (counter_1 = 0;
			haystack[counter_1] != '\0';
			counter_1++)
	{
		for (counter_2 = 0;
				needle[counter_2] != '\0';
				counter_2++)
		{
			if (haystack[counter_1 + counter_2] !=
					needle[counter_2])
				break;
		}
		if  (!needle[counter_2])
			return (&haystack[counter_1]);
	}

	return (NULL);
}

