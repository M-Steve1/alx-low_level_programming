#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 *  in memory, which contains a copy of the string
 *  given as a parameter.
 *  @str: string to duplicate.
 *
 *  Return:  returns a pointer to the duplicated string.
 *  It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *d;

	i = 0;

	if (str == NULL)
		return (NULL);

	d = malloc(sizeof(str));

	while (str[i] != '\0')
	{
		d[i] = str[i];
		i++;
	}

	if (d == NULL)
		return (NULL);

	return (d);

}
