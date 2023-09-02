#include "main.h"
/**
 * main - to print the number of arguement passed into it
 * @argc: to hold the number of command line arguement
 * @argv: to hold the command line variable
 * Return: Always 0
 */

int main(int argc, char __attribute__((unused))  *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
