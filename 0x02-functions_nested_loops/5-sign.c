#include "main.h"

/**
 * print_sign - compares int n to zero
 *
 * @n: The character to compare
 *
 * Return: return 1 if greater than, 0 if equal to zero and -1 if less than 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
