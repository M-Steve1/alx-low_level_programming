#include "main.h"

/**
 * _sqrt_recursion - Finds natural square root of a number.
 * @n: integer to find the square root.
 *
 * Return: return natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

/**
 * _sqrt - Increment i to find the sqrt
 * @n: integer to find the square root
 * @i: integer to increment
 *
 * Return :  natural square root of a number
 */
int _sqrt(int n, int i)
{
	if ((i * i) == n)
		return (i);
	if ((i * i) > n)
		return (-1);
	return (_sqrt(n, i + 1));
}
