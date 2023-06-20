#include <unistd.h>

/**
 * _putchar - Writes the character 'c' to stdout
 *
 * @c: character to be printed
 *
 * Return: Always 1 (on success),
 *	or -1 (on failure), and
 *	apropriately sets errno.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

