#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 *
 * @a: Chess array.
 *
 * Return: void.
 */

void print_chessboard(char (*a)[8])
{
	int counter_1, counter_2;

	for (counter_1 = 0;
			counter_1 < 8;
			counter_1++)
	{
		for (counter_2 = 0;
				counter_2 < 8;
				counter_2++)
		{
			_putchar(a[counter_1][counter_2]);
		}

		_putchar('\n');
	}
}

