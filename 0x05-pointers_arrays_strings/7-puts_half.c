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
	int odd;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	for (x = len / 2; x < len; x++)
	{
		if (x % 2 != 0)
		{
			odd = (len - 1) / 2;
			_putchar(str[odd]);
		}
		else
		{
			_putchar(str[x]);
		}
	}
}


