#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - to output some  strings base on some conditions
 * Return: to always return zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		puts("is positive");
	}
	else if (n == 0)
	{
		puts("is zero");
	}
	else
	{
		puts("is negative");
	}
	puts("\n");
	return (0);
}
