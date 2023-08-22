#include "main.h"
/**
 * puts_half - print half of the string and if odd print the other half
 * @str: it holds the string arguement
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len;
	int x;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		x = len / 2;
	}
	else
	{
		x = (len - 1) / 2;
	}
	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}


