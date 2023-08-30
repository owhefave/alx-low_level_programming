#include "main.h"
/**
 * factorial - returns the factorial of a number
 * @n: variable that holds the integer
 * Return: returns the factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}

}
