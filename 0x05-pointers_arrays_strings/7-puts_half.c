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
	for (x = len / 2; x < len; x++)
	{
		_putchar(str[x]);
	}
}


