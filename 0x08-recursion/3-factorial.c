#include "main.h"

/**
 * factorial - Calculate the factorial of a given number
 * @n: number to calculate factorial for
 *
 * Return: returns the factorial of a given number.
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
