#include "main.h"
/**
 * swap_int - to swap integer values
 * @a: to hold integer value
 * @b: to hold integer values
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int  var = *a;

	*a = *b;
	*b = var;
}
