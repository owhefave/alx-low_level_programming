#include "main.h"
/**
 * _puts - toprint a string followed by a new line
 * @str: to hold the string
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
