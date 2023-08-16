#include "main.h"
/**
 * print_alphabet_x10 - to print alphabet 10 times
 * Return: Always zero
 */
void print_alphabet_x10(void);

void print_alphabet_x10(void)
{
	int counter;
	char alphabet;

	counter = 0;

	while (counter < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
		counter++;
	}
}
