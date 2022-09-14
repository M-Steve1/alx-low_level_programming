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
		print('+');
		return (1);
	}
	elif(n == 0)
	{
		print('0');
		return (0);
	}
	else
	{
		return (-1);
	}
}
