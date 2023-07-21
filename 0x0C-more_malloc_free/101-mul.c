#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _atoi_digit - convert a type char to integer.
 * @c: character to be  converted.
 * Return: integer.
 **/

int _atoi_digit(char c)
{
	unsigned int int_type;

	if (c <= '9' && c >= '0')
		int_type = c - '0';
	return (int_type);
}

/**
 * _isNumber - Checks to see if a string is a number.
 * @argv: Pointer to string (argument vector.
 * Return: always 0 (success).
 **/
int _isNumber(char *argv[])
{
	int i;

	for (i = 0; argv[i]; i++)
		if (argv[i] < 48 || argv[i] > 57)
			return (1);
	return (0);
}

/**
 *_calloc - allocate memory for an array, using malloc.
 * @nmemb: number of array  elements.
 * @size: size of each element.
 * Return: pointer to allocated memory.
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int i;

	pointer = malloc(size * nmemb);

	if (pointer == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		pointer[i] = '0';

	return (pointer);
}

/**
 * mul_array - multiply two arrays.
 * @arr1: first array.
 * @len1: length of array a1.
 * @arr2:  char.
 * @arr3: array for result.
 * @len3: length of array arr3.
 * Return: pointer to array.
 **/

void *mul_array(char *arr1, int len1, char arr2, char *arr3, int len3)
{
	int mul = 0, i, len;

	len = len3;
	for (i = len1 - 1; i >= 0 ; i--)
	{
		mul += (arr1[i] - '0') * (arr2 - '0') + (arr3[len] - '0');
		arr3[len] = (mul % 10) + '0';
		mul /= 10;
		len--;
	}

		while (mul != 0)
		{
			mul += arr3[len] - '0';
			arr3[len] = (mul % 10) + '0';
			mul /= 10;
			len--;
		}

	return (arr3);
}
/**
 * print_array - print all digits of array.
 * @nb: number of elements to print.
 * @arr: array of elements.
 **/
void print_array(char *arr, int nb)
{
	int i = 0;

	while (arr[i] == '0' && (i + 1) < nb)
	{
		i++;
	}
	for (; i < nb; i++)
	{
		_putchar(arr[i]);
	}
	_putchar('\n');
}

/**
 *main - prints the multiplication of 2 numbers.
 *@argc: array count.
 *@argv: array vector.
 *Return: 0.
 */

int main(int argc, char *argv[])
{
	int i, j, len1, len2, tot_len;
	char E[6] = {'E', 'r', 'r', 'o', 'r', '\n'};
	char *tot_mul;

	if (argc != 3 || _isNumber(argv[1]) == 1 || _isNumber(argv[2]) == 1)
	{
		for (i = 0; i < 6; i++)
		{
			_putchar(E[i]);
		}
		exit(98);
	}
	for (len1 = 0; argv[1][len1]; len1++)
	;
	for (len2 = 0; argv[2][len2]; len2++)
	;
	tot_len = len1 + len2;
	tot_mul = _calloc(tot_len, sizeof(int));
	if (tot_mul == NULL)
	{
		free(tot_mul);
		return (0);
	}
	for (i = len2 - 1, j = 0; i >= 0; i--)
	{
	tot_mul = mul_array(argv[1], len1, argv[2][i], tabres, (tot_len - 1 - j));
	j++;
	}
	print_array(tot_mul, tot_len);
	free(tot_mul);
	exit(EXIT_SUCCESS);
	return (0);
}

