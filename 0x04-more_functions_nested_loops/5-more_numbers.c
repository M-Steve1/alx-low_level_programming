#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 * Return: void
 */

void more_numbers(void)
{
	int n;
	int m;

	for (n = 48; n <= 57; n++)
	{
		for (m = 0; m <= 14; m++)
			recursive(m);
		_putchar('\n');

	}
}

/**
 * recursive - A recursive function, prints each digit
 * @c: character to print
 * Return: void
 */

void recursive(int c)
{
	if (c / 10)
		recursive(c / 10);

	_putchar(c % 10 + '0');
}

