#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - a 2 dimensional array of integers.
 * @width: the width of the array
 * @height: the height of the aray
 *
 * Return:  returns a pointer to a 2 dimensional array of
 * integers.
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(sizeof(int) * width);
		if (arr[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}

	for (i = 0; i < height; i++)
	{
		free(arr[i]);
		for (j = 0; j < width; j++)
			free(arr[j]);
	}
	free(arr);

	return (arr);
}
