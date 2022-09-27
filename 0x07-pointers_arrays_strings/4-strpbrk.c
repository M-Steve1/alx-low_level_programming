#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: String to search
 * @accept: character(s) to search for
 *
 * desciption: Both loops look like an infinity loop
 * because no visible stop condition, but there is
 * for every string there is a null terminator to
 * mark the end of the string, there *(s + i) and (accept + j)
 * increment till it reaches the end of the string '\0' known
 * as a null terminator, when it get there the whole loop
 * results to false because null value equates to false.
 *
 * Return: returns a pointer to the byte in s that matches one
 * of the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	if (s[0] != '\0')
	{

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == accept[j])
				return (s + i);
		}
	}
	if (*(s + i) == accept[j])
		return (s + i);
	}
	else
	{
		return (s);
	}
	return (0);
}
