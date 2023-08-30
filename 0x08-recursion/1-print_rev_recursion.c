#include "main.h"
/**
 * _print_rev_recursion - to print string in reverse
 * @s: to hold the variable
 * Return: to return void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
