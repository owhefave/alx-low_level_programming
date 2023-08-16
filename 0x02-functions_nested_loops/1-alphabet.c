#include "main.h"
/**
 * print_alphabet - This prints alphabet in lower case
 * Return: to return 0
 */
void print_alphabet(void);

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
