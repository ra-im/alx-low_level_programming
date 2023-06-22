#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days: Fixes the print_remaining_days()
 *			function so that the output works
 *			correctly for all dates and all
 *			leap years, printing how many days
 *			are left in the year, taking the
 *			date as arguments.
 *
 * @month: month of the year (in number)
 * @day: day of the year (in number)
 * @year: year (in number)
 *
 * Return: Always void (success)
 */

void print_remaining_days(int month, int day, int year)
{
	/* reset the condition of if-statement for a leap year */
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		/* if-condition for months beyond february */
		if (month > 2)
			day++;
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		/* if-condition for the month of february and day 60 */
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		/* condition for every other month */
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}

