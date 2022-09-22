#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: returns positive if s1 is greater than s2
 * negative if s1 is less than s2
 * and zero if both are equal
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	if (s1 != s2)
	{
		for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
		{
			if (s1[i] != s2[i])
				return (s1[i] - s2[i]);
		}
	}
	else if (s1 == s2)
		return (0);

	return (0);
}
