#include <stdio.h>
/**
 * main - printing alphabet in both upper and lower case
 * Return: to return zero value
 */
int main(void)
{
	char alphabet;
	for (alphabet= 'a'; alphabet<= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	for (alphabet= 'A'; alphabet<= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
