#include "main.h"
#include <string.h>

/**
 * create_file - creates a file.
 * @filename: name of file to be created
 * @text_content: null terminated string => file content.
 * Return: 1 success, -1 failure
*/

int create_file(const char *filename, char *text_content)
{
	int op, wr, len;

	len = 0;
	if (text_content != NULL)
	{
		for (len; text_content[len]; len++)
			;
	}

	if (filename == NULL)
		return (-1);

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
