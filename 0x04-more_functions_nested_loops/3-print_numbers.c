#include "main.h"
/**
 * print_numbers - to print numbers
 * Return: Always zero
 */

void print_numbers(void);

void print_numbers(void)
{
	int var;

	for (var = 0; var <= 9; var++)
	{
		_putchar(var);
	}
	_putchar('\n');
}
