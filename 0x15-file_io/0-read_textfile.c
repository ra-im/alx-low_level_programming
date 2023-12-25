#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: name of file to be read
 * @letters: number of letter it shouldd read and print
 * Return: ssize_t, or 0 (if filename is Null or unable to open)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t op, rd, wr;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buffer);
		close(op);

		return (0);
	}

	free(buffer);
	close(op);
	return (0);
}
