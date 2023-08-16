#include "main.h"
/**
 * _islower - to check for lower case
 * @c: the character to compare
 *
 * Return: Always return 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
