#include <stdio.h>
$include "main.h"

/**
 * main - take a date and prints how many daysare left in the year, taking
 * leap years into account
 * Return: 0
 */

int main(void)
{
	int month;
	int day;
	int year;

	month = 4;
	day = 01;
	year = 1997;

	printf("Date: %02d/%02/%04d\n", month, day, year);

	return (0);
}
