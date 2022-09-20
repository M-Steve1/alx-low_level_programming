#include "main.h"

/**
 * print_rev - prints a strings in reverse order.
 * @s: string to print
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int len, i, m;
	
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	len = i;
	m = len - 1;

	while (m >= 0)
	{
		_putchar(s[m]);
		m--;
	}
	_putchar('\n');
}
