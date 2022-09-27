#include "main.h"
#define NULL 0

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
