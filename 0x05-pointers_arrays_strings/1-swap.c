#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: a pointer, the integer we want to set to swap
 * @b: a pointer, the second integer we want to swap
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int m, n;

	m = *a;
	n = *b;

	*a = n;
	*b = m;

}
