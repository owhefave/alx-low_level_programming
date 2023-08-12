#include <stdio.h>
/**
 * main - printing alphabet in reverse
 * Return: to always return zero
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
