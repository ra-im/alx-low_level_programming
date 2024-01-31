#include <stdio.h>
#include <string.h>

/**
 * generate_key - generates a key gen based on username
 *
 * @username: username
 * @key: key
 *
 * Return: void
*/
void generate_key(const char *username, char *key)
{
	int len = strlen(username);
	int i;

	/*Simple key generation algorithm (example)*/
	for (i = 0; i < len; i++)
	{
		key[i] = username[i] + 1; /*Modify this line based on the actual algorithm*/
	}

	key[len] = '\0';
}

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 success, 0 otherwise
*/
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <username>\n", argv[0]);
		return (1);
	}

	char key[256];

	/*Generate key based on the provided username*/
	generate_key(argv[1], key);

	/*Print the generated key*/
	printf("%s\n", key);

	return (0);
}
