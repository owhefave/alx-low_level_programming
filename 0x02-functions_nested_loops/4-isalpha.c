#include "main.h"
/**
 * _isalpha - function to check alphabet case
 * @c: The character to be checked
 *
 * Return: to return  1if alphabet and zero for others
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
