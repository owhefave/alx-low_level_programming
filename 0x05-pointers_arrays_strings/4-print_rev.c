#include "main.h"
/**
 * print_rev - to print strings in reverse
 * @s: to hold the string
 * Return: to return void
 */

void print_rev(char *s)
{
	int len;
	int i;

	len = 0;
	while (s[len] != '\0')
	{
		_putchar(*s);
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
