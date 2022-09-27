#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 * @s: string
 * @c: character
 *
 * Return: pointer
 */

char *_strchr(char *s, char c)
{

	for ( ; *s != '\0' || *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*s == '\0' && *s != c)
		{
			return (NULL);
		}
	}

	return (s);
}
