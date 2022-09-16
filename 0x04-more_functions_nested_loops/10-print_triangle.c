#include "main.h"

/**
 * print_triangle -  prints a triangle, followed by a new line
 * @size: number of triangles to print
 * Return: void
 */

void print_triangle(int size)
{
	int n, m, k;

	if (size > 0)
	{
		for (n = 1; n <= size; n++)
		{
			for (m = size; m > n; m--)
				_putchar(' ');
			for (k = 0; k < n; k++)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
