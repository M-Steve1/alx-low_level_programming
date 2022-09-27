#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer
 * @src: memory area to copy
 * @n: n bytes to copy
 *
 * Return: pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j;
	char *ptr;

	ptr = dest;

	i = 0;
	j = 0;


	while (dest[i] != '\0')
		i++;

	while (j < n)
	{
		*(ptr + i) = src[i];
		j++;
		i++;
	}

	return (ptr);
}
