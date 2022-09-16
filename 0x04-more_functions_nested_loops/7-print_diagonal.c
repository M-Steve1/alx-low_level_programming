#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: determines numbers of diagonal to draw
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			_putchar(92);
			_putchar('\n');
			if (a == n)
				break;

			for (b = 0; b < a; b++)
				_putchar(' ');
		}
	}
	else
	{
		_putchar('\n');
	}

}
