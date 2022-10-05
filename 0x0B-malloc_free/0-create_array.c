#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 * @size: space to reserve in memory
 * @c: char to storIe and print
 *
 * Return: Returns a pointer to the array, or NULL
 * if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	i = 0;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
