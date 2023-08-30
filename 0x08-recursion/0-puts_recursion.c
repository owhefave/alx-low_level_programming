#include "main.h"
/**
 * _puts_recursion - recursion to print string
 * @s: pointer to hold the variable
 * Return: returns void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
