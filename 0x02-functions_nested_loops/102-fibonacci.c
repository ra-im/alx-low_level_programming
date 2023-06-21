#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers,
 *		starting with 1 and 2,
 *		followed by a new line.
 *
 * Return: Always 0 (success).
 */

void fibonacci_numbers(int n)
{
	int i;

	int fibonacci_arr[50];
	fibonacci_arr[0] = 1;  /* First Fibonacci number*/
	fibonacci_arr[1] = 2;  /* Second Fibonacci number*/

    /* Generate Fibonacci sequence up to n numbers*/
	for (i = 2; i < n; i++)
	{
		fibonacci_arr[i] = fibonacci_arr[i - 1] + fibonacci_arr[i - 2];
	}
       
	/* Print the sequence with comma-separated values*/
	for (i = 0; i < n; i++)
	{
		printf("%d", fibonacci_arr[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	
	printf("\n");
}

int main(void)
{
	/* Print the first 50 Fibonacci numbers*/
	fibonacci_numbers(50);
	
	return 0;
}
	
