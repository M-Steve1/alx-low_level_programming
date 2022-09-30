#include <unistd.h>

/**
 * _putchar - print to standard output
 * @c: charcter to print
 *
 * Return: Always on Success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
