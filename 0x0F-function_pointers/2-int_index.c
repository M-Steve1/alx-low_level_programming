#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Searches for an integer.
 * @array: Pointer to array, where the integer will be
 * searched for.
 * @size: size of the array.
 * @cmp: Pointer to the compare function.
 *
 * Return: Returns the integer index for the first element
 * for which cmp function does not return 0, returns -1
 * if no element matches and -1 if size is <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == 0 || cmp == NULL)
		return (0);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
