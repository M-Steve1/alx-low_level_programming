#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: a pointer
 * @b: the conctant byte
 * @n: n byte
 *
 * Return: pointer to pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ptr;

	ptr = s;

	for (i = 0; i < n; i++)
	{
		*(ptr + i) = b;
	}

	return (s);
}
