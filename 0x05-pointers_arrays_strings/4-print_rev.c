#include "main.h"

/**
 * print_rev - prints a strings in reverse order.
 * @s: string to print
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int len, i;

	while (s[i] != '\0')
	{
		i++;
	}
	len = i;

	while (len > 0)
	{
		_putchar(s[len]);
		i--;
	}
	_putchar('\n');
}
