#include "main.h"
/**
 * string_toupper - changes lowercase letters
 * to uppercase.
 * @c: letters to change to lowercase
 *
 * Return: returns pointer c
 */

char *string_toupper(char *c)
{
	int i;
	char j;

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 'A'; j <= 'Z'; j++)
		{
			if (c[i] - j == 32 || c[i] - j == 0)
				c[i] = j;
			else
				c[i] = c[i];
		}
	}

	return (c);
}
