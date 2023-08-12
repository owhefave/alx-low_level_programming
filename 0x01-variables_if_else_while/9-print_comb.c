#include <stdio.h>
/**
 * main - to print all combinations of numbers 0 to 9
 * Return: to always return zero
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	{
		putchar(numbers + '0');
		if (numbers < 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
	}
	return (0);
}
