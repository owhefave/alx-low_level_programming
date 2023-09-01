#include "main.h"
/**
 * _isupper - to check for uppercase
 * @c: variable for store the character
 * Return: to return 1 or 0 as the case may be
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
