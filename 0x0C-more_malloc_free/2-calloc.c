#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *_memset(char *mem, char *str, unsigned int num);

/**
 * _calloc - Allocats memory for an array, using malloc.
 *
 * @nmemb: number of array elements.
 * @size: size of each array element, in bytes.
 *
 * Return: void.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(size * nmemb);

	if (pointer == NULL)
		return (NULL);

	_memset(pointer, 0, nmemb * size);

	return (pointer);
}

/**
 * _memset - fills the allocated memory with constant bytes
 *
 * @mem: address to be filled
 * @str: character string to be copied)
 * @num: number of times str is to be copied
 *
 * Return: pointer to mem.
 */

char *_memset(char *mem, char *str, unsigned int num)
{
	unsigned int i;
	
	for (i = 0; i < num; i++)
		mem[i] = str;

	return (mem);
}

