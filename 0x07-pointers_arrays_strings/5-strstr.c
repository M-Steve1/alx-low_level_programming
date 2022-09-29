#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: parent string
 * @needle: substring to check for
 *
 * Return: returns a pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i] == needle[j])
				break;
		}
		if (!needle[j])
			break;
	}

	return (i);
}
