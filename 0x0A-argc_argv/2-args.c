#include "main.h"
/**
 * main - to print the number of arguement passed into it
 * @argc: to hold the number of command line arguement
 * @argv: to hold the command line variable
 * Return: Always zero
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
