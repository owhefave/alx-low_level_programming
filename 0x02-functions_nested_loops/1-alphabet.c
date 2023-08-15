#include <stdio.h>
/**
 * main - This prints alphabet in lower case
 * Return: to return 0
 */
void print_alphabet(void);

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
