#include "main.h"
/**
 * _strlen - to print the lenght of string
 * @s: to hold the string
 * Return: void
 */

int _strlen(char *s)
{
	int lenght;

	lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
}
