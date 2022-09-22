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
	int i, k, dest_len;

	for (i = 0; dest[i] != '\0'; i++)
	dest_len = i;

	for (k = 0; k < n && src[k] != '\0'; k++)
		dest[dest_len + 1 + k] = src[k];
	dest[dest_len + 1 + k] = '\0';
	return (dest);
}
