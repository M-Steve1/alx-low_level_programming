#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Executes a function given as a parameter
 * on each element of an array.
 * @array: array to excute the function on
 * @size: size of the array
 * @action: pointer to the function
 *
 * Return: Nothing.
 */
void array_iterator(int *array, int size, void (*action)(int))
{
	int i;

	if (action == NULL || size == 0 || array == 0)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
