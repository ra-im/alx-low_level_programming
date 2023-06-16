#nclude <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabets in lowercase,
 *		and then in uppercase,
 *		followed by a new line.
 *
 * Return: Alwasys 0 (success0
 */

int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		putchar(letters);
	}

	for (letters = 'A'; letters <= 'Z'; letters++)
	{
		putchar(letters);
	}

	putchar('\n');

	return (0);
}
