#include "main.h"

/**
 * print_line - prints the character '_' n times
 * @n: integer to detrmine how many times the character '_'
 * is printed
 *
 * Return: void
 */

void print_line(int n)
{
	int m;

	for (m = 0; m < n; m++)
		if (n > 0)
			_putchar('_');

	_putchar('\n');
}
