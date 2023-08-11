#include <unistd.h>
/**
 * main - This print using the file descriptor
 * Return: return 1 for success
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, msg, sizeof(msg) - 1);
	return 1;
}
