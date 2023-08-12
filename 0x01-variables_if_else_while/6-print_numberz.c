#include <stdio.h>
/**
 * main - to print numbers using putchar
 * Return: to returb=n value zero
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	{
		putchar(numbers + '0');
	}
	putchar('\n');
	return (0);
}
