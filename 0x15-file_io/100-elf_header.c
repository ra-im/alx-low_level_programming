#include "main.h"

char *_buffer(char *fd);
void _close(int fd);

/**
 * _buffer - create a buffer of size 1024
 * for a file.
 * @file: file to be to be stored in buffer
 * Return: buffer
*/
char *_buffer(char *fd)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fd);
	}

	return (buffer);
}

/**
 * _close - close files
 * @fd: file to be closed
 * Return: void
*/
void _close(int fd)
{
	int cl;

	cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file 2 another file.
 * @argc: argument count
 * @argv: argument vector/array
 * Return: 1 success, -1 failure
*/
int main(int argc, char *argv[])
{
	int fd_from, fd_to, rd, wr;
	char *buffer;

	buffer = _buffer(argv[2]);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	rd = read(fd_from, buffer, 1024);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);

	while (rd > 0)
	{
		if (fd_from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wr = write(fd_to, buffer, rd);

		if (fd_to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rd = read(fd_from, buffer, 1024);
		fd_to = open(argv[2], O_WRONLY | O_APPEND);
		}

		free(buffer);
		_close(fd_from);
		_close(fd_to);

		return (0);
}
