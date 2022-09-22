#include "main.h"
/**
 * reverse_array - reverses content of an array
 * of integers.
 * @a: array of integer to reverse.
 * @n: number of elements of the array.
 *
 * Return: return nothing.
 */

void reverse_array(int *a, int n)
{
	int new_array[80];
	int i, j, k;

	j = 0;
	k = 0;

	for (i = n - 1; i >= 0; i--)
	{
		new_array[j] = a[i];
		j++;

	}

	for (k = 0; k < n; k++)
	{
		a[k] = new_array[k];

	}
}

