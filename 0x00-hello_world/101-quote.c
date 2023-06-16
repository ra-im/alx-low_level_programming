#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: prints exactly the string
 *		`and that piece of art is useful"
 *		- Dora Korpar, 2015-10-19`,
 *		followed by a new line,
 *		to the standard error.
 *
 * Return: Always 0 (successful)
 */

int main(void)
{
	const char *message = "and that "
		"piece of art is useful\"" 
		"- Dora Korpar, 2015-10-19\n";

	write(2, message, sizeof(message) - 1);
	return (1);
}

