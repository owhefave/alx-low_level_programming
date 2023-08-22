#include "main.h"
/**
 * rev_string - to print strings in reverse
 * @s: to hold the string
 * Return: to return void
 */

void rev_string(char *s)
{
	int len;
	int i;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
