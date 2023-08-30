#include "main.h"
/**
 * _pow_recursion - to calculate power of a number
 * @x: the variable holding the base
 * @y: the variable holding the index
 * Return: return value of x raised to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
