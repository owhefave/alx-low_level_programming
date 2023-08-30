#include "main.h"
/**
 * _strlen_recursion - to detect the lenght of a string
 * @s: variable to hold the string
 * Return: returns the lenght of the string
 */

int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		len++;
		return (len + _strlen_recursion(s + 1));
	}
}
