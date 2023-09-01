#include "main.h"
/**
 * _isdigit - to check for uppercase
 * @c: to hold the single character
 * Return: to return expected value
 */

int _isdigit(int c);

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
