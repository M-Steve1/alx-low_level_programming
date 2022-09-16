#include "main.h"

/**
 * print_square -  prints sizes, followed by a new line
 * @size: number of squares to print
 * Return: void
 */

void print_square(int size)
{
	int n;
	int s;

	s = size;

	if (s > 0)
	{
		for (n = 0; n < s; n++)
		{
			single_line_square(s);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

/**
 * single_line_square - print nth number of square on a single line
 * @c: nth number of times to print the square
 * Return: void
 */

void single_line_square(int c)
{
	int i;

	for (i = 0; i < c; i++)
		putchar('#');
}

