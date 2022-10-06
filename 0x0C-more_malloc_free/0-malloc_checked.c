#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: memory to be allocated.
 *
 * Return: returns pointer to the allocated memory
 * on success and status value 98 on failure.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = &b;

	if (ptr ==  NULL)
		exit(98);

	return (ptr);
}

