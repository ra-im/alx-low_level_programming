#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_num - checks for a number in a string.
 *
 * @str: string to be considered.
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_num(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 *
 * @str: string to be considered
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int i = 0;
	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * errors -prints Error and exit(98), followed by a new line.
 *
 * Return: void.
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *str1, *str2;
	int str1_len, str2_len, len, i, remainder, digit1, digit2, *result, a = 0;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !is_digit(str1) || !is_digit(str2))
		errors();
	str1_len = _strlen(str1);
	str2_len = _strlen(str2);
	len = str1_len + str2_len + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= str1_len + str2_len; i++)
		result[i] = 0;
	for (str1_len = str1_len - 1; str1_len >= 0; str1_len--)
	{
		digit1 = str1[str1_len] - '0';
		remainer = 0;
		for (str2_len = str2_len - 1; str2_len >= 0; str2_len--)
		{
			digit2 = str2[str2_len] - '0';
			remainder += result[str1_len + str2_len + 1] + (digit1 * digit2);
			result[str1_len + str2_len + 1] = remainder % 10;
			remainder /= 10;
		}
		if (remainder > 0)
			result[str1_len + str2_len + 1] += remainder;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
