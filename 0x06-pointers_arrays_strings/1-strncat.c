#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: holding string
 * @src: string to be appended.
 * @n: bytes to concat
 *
 * Return: returns pointer dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int k = 0;

	for ( ; dest[i] != '\0'; )
		i++;

	for ( ; k < n && src[k] != '\0'; )
	{
		dest[i] = src[k];
		i++;
		k++;
	}

	dest[i] = '\0';

	return (dest);
}
