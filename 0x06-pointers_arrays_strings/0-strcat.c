#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: holding string
 * @src: string to be appended.
 *
 * Return: returns pointer dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j, k, dest_len, src_len;

	for (i = 0; dest[i] != '\0'; i++)
	dest_len = i;

	for (j = 0; src[j] != '\0'; j++)
	src_len = j;

	for (k = 0; k < src_len && src[k] != '\0'; k++)
	{
		dest[dest_len + 1 + k] = src[k];
	}
	dest[dest_len + k] = '\0';

	return (dest);
}
