#include <stdio.h>
/**
 * main - function to output alphabets
 * Return: return zero
 */
int main(void)
{
	char var;

	for ( var = 'a'; var <= 'z'; var++)
	{	
		putchar(var);
	}
	putchar('\n');
	return (0);
}
