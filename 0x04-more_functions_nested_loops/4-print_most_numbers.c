#include "main.h"
/**
 * print_most_numbers - to print all integers except 2 and 4
 * Return:to return 
 */

void print_most_numbers(void);

void print_most_numbers(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		if (x != 2 && x != 4)
		{
			_putchar(x);
		}
	}
	_putchar('\n');
}
