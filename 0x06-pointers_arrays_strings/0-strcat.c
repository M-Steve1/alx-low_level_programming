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
	int i, k;

	i = 0;

	while (dest[i] != '\0')
		i++;

	for (k = 0; src[k] != '\0'; k++)
	{
		dest[i] = src[k];
		i++;
	}

	dest[i] = '\0';


	return (dest);
}
