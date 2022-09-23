#include "main.h"
/**
 * rot13 - encodes string using rot13
 * @c: string to encode
 *
 * Return: returns pointer c
 */

char *rot13(char *c)
{
	int i, j;

	char m[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char k[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; m[j] != '\0'; j++)
			if (c[i] == m[j])
				c[i] = k[j];
	}
	return (c);
}
