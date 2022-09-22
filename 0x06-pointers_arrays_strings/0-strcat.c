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
	int i, k, dest_len;

	for (i = 0; dest[i] != '\0'; i++)
	dest_len = i;

	for (k = 0; src[k] != '\0'; k++)
	{
		dest[dest_len + 1] = src[k];
		dest_len++;
	}
	dest[dest_len + 1] = '\0';


	return (dest);
}
