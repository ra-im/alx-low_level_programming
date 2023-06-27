#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 *
 * @s: String to be converted to an integer.
 *
 * Return: int n.
 */

int _atoi(char *s)
{
	int integer_sign = 1;
	unsigned int integer = 0;

	do
	{
		/* condition for when *s has a neative sign */
		if (*s == '-')
		{
			integer_sign *= -1; /* sets the variable sign to negative */
		}
		/* condition for when the value of *s ranges from 0 to 9 */
		else if (*s >=0 && *s <= 9)
		{
			integer = (integer * 10) + (*s - '0');
		}
		/* condition for wen the integer is strictly greater than 0 */
		else if (integer > 0)
			break;
	} while (*s++);

	return (integer * integer_sign);
}

