#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: str to concat
 * @s2: str to concat
 *
 * Return: On Success returns a pointer to the newly allocated
 * space in memory and NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int len1, len2, i, j;

	len1 = 0;
	len2 = 0;
	i = 0;
	j = 0;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	ptr = malloc(sizeof(char) * (len1 + len2 + 1));

	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		ptr[len1 + j] = s2[j];
		j++;
	}

	ptr[len1 + len2 + 1] = '\0';

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
