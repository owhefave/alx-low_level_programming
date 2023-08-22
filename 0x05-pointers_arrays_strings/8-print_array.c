#include "main.h"
/**
 * print_array - to print n elements of an array of integers
 * @a: the pointer to hold integers
 * @n: integers
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
