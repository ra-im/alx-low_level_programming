#include <stdio.h>

/* dfine the constructor attribute */
/* to execute the function before the main */
int prnt_first(void) __attribute__ ((constructor));

/**
 * prnt_first - prints a sentence before the main fxn is executed.
 *
 * Return: always 0 (success).
 */
int prnt_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

