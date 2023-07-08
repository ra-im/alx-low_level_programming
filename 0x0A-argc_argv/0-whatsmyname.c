#include <stdio.h>
#include "main.h"

/** main - Prints its name, followed by a new line.
 *
 * @argc:: number of arguments.
 * @argb: array of arguments.
 *
 * Return: always 0 (successs)
 */

int main(int argc __attribute__((__unused__)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
