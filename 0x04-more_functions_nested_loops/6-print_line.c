#include "main.h"
/**
 * print_line - to draw a straight line
 * @n: to hold the line lenght
 * Return: Always zero
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (n > 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

