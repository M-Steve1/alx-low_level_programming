#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: The character to compute
 *
 * Return: return an absolute integer
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n * -1);
	}
}
