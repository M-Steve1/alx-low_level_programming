#include "main.h"
/**
 * leet - encodes string
 * @c: string to encode
 *
 * Return: returns pointer c
 */

char *leet(char *c)
{
	int i, j;

	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
			if (c[i] == letters[j])
				c[i] = numbers[j];
	}
	return (c);
}
