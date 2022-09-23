#include "main.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @c: string to capitalize.
 *
 * Return: returns pointer c
 */

char *cap_string(char *c)
{
	int i;
	char j;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (i == 0 && c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 32;

		if (c[i] == ' ' || c[i] == '\n' || c[i] == '\t' ||
				c[i] == ',' || c[i] == '.' || c[i] == '"' || c[i] == ';'
				|| c[i] == '!' || c[i] == '(' || c[i] == ')' || c[i] == '?'
				|| c[i] == '{' || c[i] == '}')
		{
			for (j = 'A'; j <= 'Z'; j++)
			{
				if (c[i + 1] - j == 32 || c[i + 1] - j == 0)
					c[i + 1] = j;
				else
					c[i + 1] = c[i + 1];
			}
		}
		else
		{
			c[i] = c[i];
		}
	}

	return (c);
}
